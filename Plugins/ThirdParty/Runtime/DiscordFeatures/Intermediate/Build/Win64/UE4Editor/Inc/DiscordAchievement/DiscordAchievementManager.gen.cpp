// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordAchievement/Public/DiscordAchievementManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordAchievementManager() {}
// Cross Module References
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UDiscordAchievementManager_NoRegister();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UDiscordAchievementManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordAchievement();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDACHIEVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserAchievement();
	DISCORDACHIEVEMENT_API UFunction* Z_Construct_UDelegateFunction_DiscordAchievement_AchievementOnUserAchievementUpdate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordAchievementManager::execCountUserAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountUserAchievements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordAchievementManager::execGetAchievementManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordAchievementManager**)Z_Param__Result=UDiscordAchievementManager::GetAchievementManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordAchievementManager::execGetUserAchievementAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordUserAchievement*)Z_Param__Result=P_THIS->GetUserAchievementAt(Z_Param_Index);
		P_NATIVE_END;
	}
	void UDiscordAchievementManager::StaticRegisterNativesUDiscordAchievementManager()
	{
		UClass* Class = UDiscordAchievementManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CountUserAchievements", &UDiscordAchievementManager::execCountUserAchievements },
			{ "GetAchievementManager", &UDiscordAchievementManager::execGetAchievementManager },
			{ "GetUserAchievementAt", &UDiscordAchievementManager::execGetUserAchievementAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics
	{
		struct DiscordAchievementManager_eventCountUserAchievements_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordAchievementManager_eventCountUserAchievements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordAchievementManager, nullptr, "CountUserAchievements", nullptr, nullptr, sizeof(DiscordAchievementManager_eventCountUserAchievements_Parms), Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics
	{
		struct DiscordAchievementManager_eventGetAchievementManager_Parms
		{
			const UDiscordCore* DiscordCore;
			UDiscordAchievementManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::NewProp_DiscordCore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordAchievementManager_eventGetAchievementManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::NewProp_DiscordCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::NewProp_DiscordCore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordAchievementManager_eventGetAchievementManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordAchievementManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordAchievementManager, nullptr, "GetAchievementManager", nullptr, nullptr, sizeof(DiscordAchievementManager_eventGetAchievementManager_Parms), Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics
	{
		struct DiscordAchievementManager_eventGetUserAchievementAt_Parms
		{
			int32 Index;
			FDiscordUserAchievement ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordAchievementManager_eventGetUserAchievementAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordAchievementManager_eventGetUserAchievementAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordUserAchievement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordAchievementManager, nullptr, "GetUserAchievementAt", nullptr, nullptr, sizeof(DiscordAchievementManager_eventGetUserAchievementAt_Parms), Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordAchievementManager_NoRegister()
	{
		return UDiscordAchievementManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordAchievementManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserAchievementUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserAchievementUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordAchievementManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordAchievement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordAchievementManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordAchievementManager_CountUserAchievements, "CountUserAchievements" }, // 2280406586
		{ &Z_Construct_UFunction_UDiscordAchievementManager_GetAchievementManager, "GetAchievementManager" }, // 2743819430
		{ &Z_Construct_UFunction_UDiscordAchievementManager_GetUserAchievementAt, "GetUserAchievementAt" }, // 2159992842
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordAchievementManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordAchievementManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordAchievementManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordAchievementManager_Statics::NewProp_OnUserAchievementUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordAchievementManager" },
		{ "ModuleRelativePath", "Public/DiscordAchievementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordAchievementManager_Statics::NewProp_OnUserAchievementUpdate = { "OnUserAchievementUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordAchievementManager, OnUserAchievementUpdate), Z_Construct_UDelegateFunction_DiscordAchievement_AchievementOnUserAchievementUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordAchievementManager_Statics::NewProp_OnUserAchievementUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordAchievementManager_Statics::NewProp_OnUserAchievementUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordAchievementManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordAchievementManager_Statics::NewProp_OnUserAchievementUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordAchievementManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordAchievementManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordAchievementManager_Statics::ClassParams = {
		&UDiscordAchievementManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordAchievementManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordAchievementManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordAchievementManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordAchievementManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordAchievementManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordAchievementManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordAchievementManager, 2907747540);
	template<> DISCORDACHIEVEMENT_API UClass* StaticClass<UDiscordAchievementManager>()
	{
		return UDiscordAchievementManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordAchievementManager(Z_Construct_UClass_UDiscordAchievementManager, &UDiscordAchievementManager::StaticClass, TEXT("/Script/DiscordAchievement"), TEXT("UDiscordAchievementManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordAchievementManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
