// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdaptiveMusic/Public/AdaptiveMusicVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptiveMusicVolume() {}
// Cross Module References
	ADAPTIVEMUSIC_API UClass* Z_Construct_UClass_AAdaptiveMusicVolume_NoRegister();
	ADAPTIVEMUSIC_API UClass* Z_Construct_UClass_AAdaptiveMusicVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_AdaptiveMusic();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAdaptiveMusicVolume::execGetEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFMODEvent**)Z_Param__Result=P_THIS->GetEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAdaptiveMusicVolume::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	void AAdaptiveMusicVolume::StaticRegisterNativesAAdaptiveMusicVolume()
	{
		UClass* Class = AAdaptiveMusicVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEvent", &AAdaptiveMusicVolume::execGetEvent },
			{ "GetPriority", &AAdaptiveMusicVolume::execGetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics
	{
		struct AdaptiveMusicVolume_eventGetEvent_Parms
		{
			UFMODEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicVolume_eventGetEvent_Parms, ReturnValue), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdaptiveMusicVolume, nullptr, "GetEvent", nullptr, nullptr, sizeof(AdaptiveMusicVolume_eventGetEvent_Parms), Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics
	{
		struct AdaptiveMusicVolume_eventGetPriority_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdaptiveMusicVolume, nullptr, "GetPriority", nullptr, nullptr, sizeof(AdaptiveMusicVolume_eventGetPriority_Parms), Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAdaptiveMusicVolume_NoRegister()
	{
		return AAdaptiveMusicVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAdaptiveMusicVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Event;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdaptiveMusicVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AdaptiveMusic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdaptiveMusicVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdaptiveMusicVolume_GetEvent, "GetEvent" }, // 2654711546
		{ &Z_Construct_UFunction_AAdaptiveMusicVolume_GetPriority, "GetPriority" }, // 843334786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptiveMusicVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AdaptiveMusicVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AdaptiveMusicVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Event_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdaptiveMusicVolume" },
		{ "ModuleRelativePath", "Public/AdaptiveMusicVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdaptiveMusicVolume, Event), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Event_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdaptiveMusicVolume" },
		{ "ModuleRelativePath", "Public/AdaptiveMusicVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdaptiveMusicVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdaptiveMusicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdaptiveMusicVolume_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdaptiveMusicVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdaptiveMusicVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdaptiveMusicVolume_Statics::ClassParams = {
		&AAdaptiveMusicVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdaptiveMusicVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptiveMusicVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdaptiveMusicVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptiveMusicVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdaptiveMusicVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdaptiveMusicVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdaptiveMusicVolume, 1376676623);
	template<> ADAPTIVEMUSIC_API UClass* StaticClass<AAdaptiveMusicVolume>()
	{
		return AAdaptiveMusicVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdaptiveMusicVolume(Z_Construct_UClass_AAdaptiveMusicVolume, &AAdaptiveMusicVolume::StaticClass, TEXT("/Script/AdaptiveMusic"), TEXT("AAdaptiveMusicVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdaptiveMusicVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
