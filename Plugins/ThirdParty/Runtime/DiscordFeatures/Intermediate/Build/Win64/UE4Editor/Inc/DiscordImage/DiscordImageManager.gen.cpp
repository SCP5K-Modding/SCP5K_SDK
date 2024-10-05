// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordImage/Public/DiscordImageManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordImageManager() {}
// Cross Module References
	DISCORDIMAGE_API UClass* Z_Construct_UClass_UDiscordImageManager_NoRegister();
	DISCORDIMAGE_API UClass* Z_Construct_UClass_UDiscordImageManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordImage();
	DISCORDIMAGE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordImageHandle();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDIMAGE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordImageDimensions();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordImageManager::execGetData)
	{
		P_GET_STRUCT_REF(FDiscordImageHandle,Z_Param_Out_Handle);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDiscordResult*)Z_Param__Result=P_THIS->GetData(Z_Param_Out_Handle,Z_Param_Out_OutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordImageManager::execGetDimensions)
	{
		P_GET_STRUCT_REF(FDiscordImageHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordImageDimensions*)Z_Param__Result=P_THIS->GetDimensions(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordImageManager::execGetImageManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordImageManager**)Z_Param__Result=UDiscordImageManager::GetImageManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordImageManager::execGetTexture)
	{
		P_GET_STRUCT_REF(FDiscordImageHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetTexture(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	void UDiscordImageManager::StaticRegisterNativesUDiscordImageManager()
	{
		UClass* Class = UDiscordImageManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetData", &UDiscordImageManager::execGetData },
			{ "GetDimensions", &UDiscordImageManager::execGetDimensions },
			{ "GetImageManager", &UDiscordImageManager::execGetImageManager },
			{ "GetTexture", &UDiscordImageManager::execGetTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordImageManager_GetData_Statics
	{
		struct DiscordImageManager_eventGetData_Parms
		{
			FDiscordImageHandle Handle;
			TArray<uint8> OutData;
			EDiscordResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetData_Parms, Handle), Z_Construct_UScriptStruct_FDiscordImageHandle, METADATA_PARAMS(Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetData_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetData_Parms, ReturnValue), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_OutData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_OutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordImageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordImageManager, nullptr, "GetData", nullptr, nullptr, sizeof(DiscordImageManager_eventGetData_Parms), Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordImageManager_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordImageManager_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics
	{
		struct DiscordImageManager_eventGetDimensions_Parms
		{
			FDiscordImageHandle Handle;
			FDiscordImageDimensions ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetDimensions_Parms, Handle), Z_Construct_UScriptStruct_FDiscordImageHandle, METADATA_PARAMS(Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordImageDimensions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordImageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordImageManager, nullptr, "GetDimensions", nullptr, nullptr, sizeof(DiscordImageManager_eventGetDimensions_Parms), Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordImageManager_GetDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordImageManager_GetDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics
	{
		struct DiscordImageManager_eventGetImageManager_Parms
		{
			UDiscordCore* DiscordCore;
			UDiscordImageManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetImageManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetImageManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordImageManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordImageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordImageManager, nullptr, "GetImageManager", nullptr, nullptr, sizeof(DiscordImageManager_eventGetImageManager_Parms), Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordImageManager_GetImageManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordImageManager_GetImageManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics
	{
		struct DiscordImageManager_eventGetTexture_Parms
		{
			FDiscordImageHandle Handle;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetTexture_Parms, Handle), Z_Construct_UScriptStruct_FDiscordImageHandle, METADATA_PARAMS(Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordImageManager_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordImageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordImageManager, nullptr, "GetTexture", nullptr, nullptr, sizeof(DiscordImageManager_eventGetTexture_Parms), Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordImageManager_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordImageManager_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordImageManager_NoRegister()
	{
		return UDiscordImageManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordImageManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordImageManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordImage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordImageManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordImageManager_GetData, "GetData" }, // 2152674236
		{ &Z_Construct_UFunction_UDiscordImageManager_GetDimensions, "GetDimensions" }, // 1582916170
		{ &Z_Construct_UFunction_UDiscordImageManager_GetImageManager, "GetImageManager" }, // 2527752035
		{ &Z_Construct_UFunction_UDiscordImageManager_GetTexture, "GetTexture" }, // 476824493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordImageManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordImageManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordImageManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordImageManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordImageManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordImageManager_Statics::ClassParams = {
		&UDiscordImageManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDiscordImageManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordImageManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordImageManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordImageManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordImageManager, 4096982698);
	template<> DISCORDIMAGE_API UClass* StaticClass<UDiscordImageManager>()
	{
		return UDiscordImageManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordImageManager(Z_Construct_UClass_UDiscordImageManager, &UDiscordImageManager::StaticClass, TEXT("/Script/DiscordImage"), TEXT("UDiscordImageManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordImageManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
