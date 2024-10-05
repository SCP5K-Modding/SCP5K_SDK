// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordUser/Public/DiscordUserManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordUserManager() {}
// Cross Module References
	DISCORDUSER_API UClass* Z_Construct_UClass_UDiscordUserManager_NoRegister();
	DISCORDUSER_API UClass* Z_Construct_UClass_UDiscordUserManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordUser();
	DISCORDUSER_API UEnum* Z_Construct_UEnum_DiscordUser_EDiscordUserFlag();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUser();
	DISCORDUSER_API UEnum* Z_Construct_UEnum_DiscordUser_EDiscordPremiumType();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDUSER_API UFunction* Z_Construct_UDelegateFunction_DiscordUser_OnCurrentUserUpdateEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordUserManager::execCurrentUserHasFlag)
	{
		P_GET_ENUM(EDiscordUserFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CurrentUserHasFlag(EDiscordUserFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordUserManager::execGetCurrentUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordUser*)Z_Param__Result=P_THIS->GetCurrentUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordUserManager::execGetCurrentUserPremiumType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDiscordPremiumType*)Z_Param__Result=P_THIS->GetCurrentUserPremiumType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordUserManager::execGetUserManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordUserManager**)Z_Param__Result=UDiscordUserManager::GetUserManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	void UDiscordUserManager::StaticRegisterNativesUDiscordUserManager()
	{
		UClass* Class = UDiscordUserManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CurrentUserHasFlag", &UDiscordUserManager::execCurrentUserHasFlag },
			{ "GetCurrentUser", &UDiscordUserManager::execGetCurrentUser },
			{ "GetCurrentUserPremiumType", &UDiscordUserManager::execGetCurrentUserPremiumType },
			{ "GetUserManager", &UDiscordUserManager::execGetUserManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics
	{
		struct DiscordUserManager_eventCurrentUserHasFlag_Parms
		{
			EDiscordUserFlag Flag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_Flag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordUserManager_eventCurrentUserHasFlag_Parms, Flag), Z_Construct_UEnum_DiscordUser_EDiscordUserFlag, METADATA_PARAMS(Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_Flag_MetaData)) };
	void Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordUserManager_eventCurrentUserHasFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordUserManager_eventCurrentUserHasFlag_Parms), &Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordUserManager, nullptr, "CurrentUserHasFlag", nullptr, nullptr, sizeof(DiscordUserManager_eventCurrentUserHasFlag_Parms), Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics
	{
		struct DiscordUserManager_eventGetCurrentUser_Parms
		{
			FDiscordUser ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordUserManager_eventGetCurrentUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordUser, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordUserManager, nullptr, "GetCurrentUser", nullptr, nullptr, sizeof(DiscordUserManager_eventGetCurrentUser_Parms), Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics
	{
		struct DiscordUserManager_eventGetCurrentUserPremiumType_Parms
		{
			EDiscordPremiumType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordUserManager_eventGetCurrentUserPremiumType_Parms, ReturnValue), Z_Construct_UEnum_DiscordUser_EDiscordPremiumType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordUserManager, nullptr, "GetCurrentUserPremiumType", nullptr, nullptr, sizeof(DiscordUserManager_eventGetCurrentUserPremiumType_Parms), Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics
	{
		struct DiscordUserManager_eventGetUserManager_Parms
		{
			const UDiscordCore* DiscordCore;
			UDiscordUserManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordCore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::NewProp_DiscordCore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordUserManager_eventGetUserManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::NewProp_DiscordCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::NewProp_DiscordCore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordUserManager_eventGetUserManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordUserManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordUserManager, nullptr, "GetUserManager", nullptr, nullptr, sizeof(DiscordUserManager_eventGetUserManager_Parms), Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordUserManager_GetUserManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordUserManager_GetUserManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordUserManager_NoRegister()
	{
		return UDiscordUserManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordUserManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCurrentUserUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentUserUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordUserManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordUserManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordUserManager_CurrentUserHasFlag, "CurrentUserHasFlag" }, // 136171865
		{ &Z_Construct_UFunction_UDiscordUserManager_GetCurrentUser, "GetCurrentUser" }, // 907186190
		{ &Z_Construct_UFunction_UDiscordUserManager_GetCurrentUserPremiumType, "GetCurrentUserPremiumType" }, // 2399737542
		{ &Z_Construct_UFunction_UDiscordUserManager_GetUserManager, "GetUserManager" }, // 204371657
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordUserManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordUserManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordUserManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordUserManager_Statics::NewProp_OnCurrentUserUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUserManager" },
		{ "ModuleRelativePath", "Public/DiscordUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordUserManager_Statics::NewProp_OnCurrentUserUpdate = { "OnCurrentUserUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordUserManager, OnCurrentUserUpdate), Z_Construct_UDelegateFunction_DiscordUser_OnCurrentUserUpdateEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordUserManager_Statics::NewProp_OnCurrentUserUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordUserManager_Statics::NewProp_OnCurrentUserUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordUserManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordUserManager_Statics::NewProp_OnCurrentUserUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordUserManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordUserManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordUserManager_Statics::ClassParams = {
		&UDiscordUserManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordUserManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordUserManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordUserManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordUserManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordUserManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordUserManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordUserManager, 3279435190);
	template<> DISCORDUSER_API UClass* StaticClass<UDiscordUserManager>()
	{
		return UDiscordUserManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordUserManager(Z_Construct_UClass_UDiscordUserManager, &UDiscordUserManager::StaticClass, TEXT("/Script/DiscordUser"), TEXT("UDiscordUserManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordUserManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
