// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ElectronicScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicScreen() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicScreen_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicScreen();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicLight();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AElectronicScreen::execAssetLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicScreen::execIsBeingViewed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBeingViewed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicScreen::execSetTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicScreen::execUpdateTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTexture();
		P_NATIVE_END;
	}
	void AElectronicScreen::StaticRegisterNativesAElectronicScreen()
	{
		UClass* Class = AElectronicScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssetLoaded", &AElectronicScreen::execAssetLoaded },
			{ "IsBeingViewed", &AElectronicScreen::execIsBeingViewed },
			{ "SetTexture", &AElectronicScreen::execSetTexture },
			{ "UpdateTexture", &AElectronicScreen::execUpdateTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AElectronicScreen_AssetLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicScreen_AssetLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicScreen_AssetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicScreen, nullptr, "AssetLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicScreen_AssetLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicScreen_AssetLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicScreen_AssetLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicScreen_AssetLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics
	{
		struct ElectronicScreen_eventIsBeingViewed_Parms
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
	void Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElectronicScreen_eventIsBeingViewed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElectronicScreen_eventIsBeingViewed_Parms), &Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicScreen, nullptr, "IsBeingViewed", nullptr, nullptr, sizeof(ElectronicScreen_eventIsBeingViewed_Parms), Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicScreen_IsBeingViewed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicScreen_IsBeingViewed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics
	{
		struct ElectronicScreen_eventSetTexture_Parms
		{
			UTexture* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicScreen_eventSetTexture_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicScreen, nullptr, "SetTexture", nullptr, nullptr, sizeof(ElectronicScreen_eventSetTexture_Parms), Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicScreen_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicScreen_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicScreen_UpdateTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicScreen_UpdateTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicScreen_UpdateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicScreen, nullptr, "UpdateTexture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicScreen_UpdateTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicScreen_UpdateTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicScreen_UpdateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicScreen_UpdateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AElectronicScreen_NoRegister()
	{
		return AElectronicScreen::StaticClass();
	}
	struct Z_Construct_UClass_AElectronicScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideTexture_MetaData[];
#endif
		static void NewProp_bUseOverrideTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrokenTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BrokenTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetLightTextureFromScreen_MetaData[];
#endif
		static void NewProp_bSetLightTextureFromScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetLightTextureFromScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElectronicScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronicLight,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElectronicScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElectronicScreen_AssetLoaded, "AssetLoaded" }, // 3094612627
		{ &Z_Construct_UFunction_AElectronicScreen_IsBeingViewed, "IsBeingViewed" }, // 4013964449
		{ &Z_Construct_UFunction_AElectronicScreen_SetTexture, "SetTexture" }, // 1874541925
		{ &Z_Construct_UFunction_AElectronicScreen_UpdateTexture, "UpdateTexture" }, // 3160956375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ElectronicScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bUseOverrideTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicScreen" },
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bUseOverrideTexture_SetBit(void* Obj)
	{
		((AElectronicScreen*)Obj)->bUseOverrideTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bUseOverrideTexture = { "bUseOverrideTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicScreen), &Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bUseOverrideTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bUseOverrideTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bUseOverrideTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicScreen_Statics::NewProp_TextureParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicScreen" },
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AElectronicScreen_Statics::NewProp_TextureParameterName = { "TextureParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicScreen, TextureParameterName), METADATA_PARAMS(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_TextureParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_TextureParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicScreen_Statics::NewProp_OverrideTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicScreen" },
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AElectronicScreen_Statics::NewProp_OverrideTexture = { "OverrideTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicScreen, OverrideTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_OverrideTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_OverrideTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicScreen_Statics::NewProp_BrokenTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicScreen" },
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AElectronicScreen_Statics::NewProp_BrokenTexture = { "BrokenTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicScreen, BrokenTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_BrokenTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_BrokenTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicScreen" },
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewTimeout = { "ViewTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicScreen, ViewTimeout), METADATA_PARAMS(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicScreen" },
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewDistance = { "ViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicScreen, ViewDistance), METADATA_PARAMS(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bSetLightTextureFromScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicScreen" },
		{ "ModuleRelativePath", "Public/ElectronicScreen.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bSetLightTextureFromScreen_SetBit(void* Obj)
	{
		((AElectronicScreen*)Obj)->bSetLightTextureFromScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bSetLightTextureFromScreen = { "bSetLightTextureFromScreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicScreen), &Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bSetLightTextureFromScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bSetLightTextureFromScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bSetLightTextureFromScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectronicScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bUseOverrideTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicScreen_Statics::NewProp_TextureParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicScreen_Statics::NewProp_OverrideTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicScreen_Statics::NewProp_BrokenTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicScreen_Statics::NewProp_ViewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicScreen_Statics::NewProp_bSetLightTextureFromScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElectronicScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectronicScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElectronicScreen_Statics::ClassParams = {
		&AElectronicScreen::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AElectronicScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElectronicScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElectronicScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElectronicScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElectronicScreen, 2279506140);
	template<> ELECTRONICS_API UClass* StaticClass<AElectronicScreen>()
	{
		return AElectronicScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElectronicScreen(Z_Construct_UClass_AElectronicScreen, &AElectronicScreen::StaticClass, TEXT("/Script/Electronics"), TEXT("AElectronicScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElectronicScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
