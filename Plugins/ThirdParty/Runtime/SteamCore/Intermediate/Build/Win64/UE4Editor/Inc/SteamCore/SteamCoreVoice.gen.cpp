// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreVoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreVoice() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreVoice_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreVoice();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreVoice::execAddAudioBuffer)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAudioBuffer(Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreVoice::execConstructSteamCoreVoice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AudioSampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreVoice**)Z_Param__Result=USteamCoreVoice::ConstructSteamCoreVoice(Z_Param_AudioSampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreVoice::execDestroySteamCoreVoice)
	{
		P_GET_OBJECT(USteamCoreVoice,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamCoreVoice::DestroySteamCoreVoice(Z_Param_Obj);
		P_NATIVE_END;
	}
	void USteamCoreVoice::StaticRegisterNativesUSteamCoreVoice()
	{
		UClass* Class = USteamCoreVoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAudioBuffer", &USteamCoreVoice::execAddAudioBuffer },
			{ "ConstructSteamCoreVoice", &USteamCoreVoice::execConstructSteamCoreVoice },
			{ "DestroySteamCoreVoice", &USteamCoreVoice::execDestroySteamCoreVoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics
	{
		struct SteamCoreVoice_eventAddAudioBuffer_Parms
		{
			TArray<uint8> Buffer;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreVoice_eventAddAudioBuffer_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "AddAudioBuffer", nullptr, nullptr, sizeof(SteamCoreVoice_eventAddAudioBuffer_Parms), Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics
	{
		struct SteamCoreVoice_eventConstructSteamCoreVoice_Parms
		{
			int32 AudioSampleRate;
			USteamCoreVoice* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioSampleRate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreVoice_eventConstructSteamCoreVoice_Parms, AudioSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreVoice_eventConstructSteamCoreVoice_Parms, ReturnValue), Z_Construct_UClass_USteamCoreVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_AudioSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "ConstructSteamCoreVoice", nullptr, nullptr, sizeof(SteamCoreVoice_eventConstructSteamCoreVoice_Parms), Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics
	{
		struct SteamCoreVoice_eventDestroySteamCoreVoice_Parms
		{
			USteamCoreVoice* Obj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreVoice_eventDestroySteamCoreVoice_Parms, Obj), Z_Construct_UClass_USteamCoreVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreVoice, nullptr, "DestroySteamCoreVoice", nullptr, nullptr, sizeof(SteamCoreVoice_eventDestroySteamCoreVoice_Parms), Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreVoice_NoRegister()
	{
		return USteamCoreVoice::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreVoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreVoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreVoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreVoice_AddAudioBuffer, "AddAudioBuffer" }, // 2270952069
		{ &Z_Construct_UFunction_USteamCoreVoice_ConstructSteamCoreVoice, "ConstructSteamCoreVoice" }, // 3750052892
		{ &Z_Construct_UFunction_USteamCoreVoice_DestroySteamCoreVoice, "DestroySteamCoreVoice" }, // 4135396533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreVoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SteamCoreVoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreVoice.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreVoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreVoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreVoice_Statics::ClassParams = {
		&USteamCoreVoice::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreVoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreVoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreVoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreVoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreVoice, 678010161);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreVoice>()
	{
		return USteamCoreVoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreVoice(Z_Construct_UClass_USteamCoreVoice, &USteamCoreVoice::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreVoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreVoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
