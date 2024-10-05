// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/MapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapComponent() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UMapComponent_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UMapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapComponent::execGetMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetMapName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMapName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetMaxCorner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMaxCorner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetMaxReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMaxReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetMinCorner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMinCorner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetMinReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMinReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetOverlayTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetOverlayTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetUV)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetUV(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapComponent::execGetUVAxisAligned)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetUVAxisAligned(Z_Param_position);
		P_NATIVE_END;
	}
	void UMapComponent::StaticRegisterNativesUMapComponent()
	{
		UClass* Class = UMapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMap", &UMapComponent::execGetMap },
			{ "GetMapName", &UMapComponent::execGetMapName },
			{ "GetMaxCorner", &UMapComponent::execGetMaxCorner },
			{ "GetMaxReference", &UMapComponent::execGetMaxReference },
			{ "GetMinCorner", &UMapComponent::execGetMinCorner },
			{ "GetMinReference", &UMapComponent::execGetMinReference },
			{ "GetOverlayTexture", &UMapComponent::execGetOverlayTexture },
			{ "GetSize", &UMapComponent::execGetSize },
			{ "GetUV", &UMapComponent::execGetUV },
			{ "GetUVAxisAligned", &UMapComponent::execGetUVAxisAligned },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapComponent_GetMap_Statics
	{
		struct MapComponent_eventGetMap_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapComponent_GetMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetMap_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetMap", nullptr, nullptr, sizeof(MapComponent_eventGetMap_Parms), Z_Construct_UFunction_UMapComponent_GetMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetMapName_Statics
	{
		struct MapComponent_eventGetMapName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMapComponent_GetMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetMapName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetMapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetMapName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetMapName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetMapName", nullptr, nullptr, sizeof(MapComponent_eventGetMapName_Parms), Z_Construct_UFunction_UMapComponent_GetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics
	{
		struct MapComponent_eventGetMaxCorner_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetMaxCorner_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetMaxCorner", nullptr, nullptr, sizeof(MapComponent_eventGetMaxCorner_Parms), Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetMaxCorner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetMaxCorner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics
	{
		struct MapComponent_eventGetMaxReference_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetMaxReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetMaxReference", nullptr, nullptr, sizeof(MapComponent_eventGetMaxReference_Parms), Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetMaxReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetMaxReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics
	{
		struct MapComponent_eventGetMinCorner_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetMinCorner_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetMinCorner", nullptr, nullptr, sizeof(MapComponent_eventGetMinCorner_Parms), Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetMinCorner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetMinCorner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetMinReference_Statics
	{
		struct MapComponent_eventGetMinReference_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetMinReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetMinReference", nullptr, nullptr, sizeof(MapComponent_eventGetMinReference_Parms), Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetMinReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetMinReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics
	{
		struct MapComponent_eventGetOverlayTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetOverlayTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetOverlayTexture", nullptr, nullptr, sizeof(MapComponent_eventGetOverlayTexture_Parms), Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetOverlayTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetOverlayTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetSize_Statics
	{
		struct MapComponent_eventGetSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetSize", nullptr, nullptr, sizeof(MapComponent_eventGetSize_Parms), Z_Construct_UFunction_UMapComponent_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetUV_Statics
	{
		struct MapComponent_eventGetUV_Parms
		{
			FVector position;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetUV_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetUV_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetUV_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetUV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetUV", nullptr, nullptr, sizeof(MapComponent_eventGetUV_Parms), Z_Construct_UFunction_UMapComponent_GetUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics
	{
		struct MapComponent_eventGetUVAxisAligned_Parms
		{
			FVector position;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetUVAxisAligned_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapComponent_eventGetUVAxisAligned_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapComponent, nullptr, "GetUVAxisAligned", nullptr, nullptr, sizeof(MapComponent_eventGetUVAxisAligned_Parms), Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapComponent_GetUVAxisAligned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapComponent_GetUVAxisAligned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapComponent_NoRegister()
	{
		return UMapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVReferenceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVReferenceMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVReferenceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVReferenceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCorner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinCorner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCorner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxCorner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldMinCorner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldMinCorner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldMaxCorner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldMaxCorner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TestActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlayTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapComponent_GetMap, "GetMap" }, // 1153091371
		{ &Z_Construct_UFunction_UMapComponent_GetMapName, "GetMapName" }, // 453417126
		{ &Z_Construct_UFunction_UMapComponent_GetMaxCorner, "GetMaxCorner" }, // 3627027100
		{ &Z_Construct_UFunction_UMapComponent_GetMaxReference, "GetMaxReference" }, // 3208366360
		{ &Z_Construct_UFunction_UMapComponent_GetMinCorner, "GetMinCorner" }, // 1971044715
		{ &Z_Construct_UFunction_UMapComponent_GetMinReference, "GetMinReference" }, // 1515113307
		{ &Z_Construct_UFunction_UMapComponent_GetOverlayTexture, "GetOverlayTexture" }, // 2110094642
		{ &Z_Construct_UFunction_UMapComponent_GetSize, "GetSize" }, // 1713560695
		{ &Z_Construct_UFunction_UMapComponent_GetUV, "GetUV" }, // 1663318023
		{ &Z_Construct_UFunction_UMapComponent_GetUVAxisAligned, "GetUVAxisAligned" }, // 877639894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MapComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMin = { "ReferenceMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, ReferenceMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMax = { "ReferenceMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, ReferenceMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMin = { "UVReferenceMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, UVReferenceMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMax = { "UVReferenceMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, UVReferenceMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_MapName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, MapName), METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_MinCorner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_MinCorner = { "MinCorner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, MinCorner), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_MinCorner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_MinCorner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_MaxCorner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_MaxCorner = { "MaxCorner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, MaxCorner), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_MaxCorner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_MaxCorner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMinCorner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMinCorner = { "WorldMinCorner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, WorldMinCorner), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMinCorner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMinCorner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMaxCorner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMaxCorner = { "WorldMaxCorner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, WorldMaxCorner), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMaxCorner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMaxCorner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_TestActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_TestActor = { "TestActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, TestActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_TestActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_TestActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_Map_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, Map), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_DefaultIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_DefaultIcon = { "DefaultIcon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, DefaultIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_DefaultIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_DefaultIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapComponent_Statics::NewProp_OverlayTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapComponent" },
		{ "ModuleRelativePath", "Public/MapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapComponent_Statics::NewProp_OverlayTexture = { "OverlayTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapComponent, OverlayTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::NewProp_OverlayTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::NewProp_OverlayTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_ReferenceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_UVReferenceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_MinCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_MaxCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMinCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_WorldMaxCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_TestActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_DefaultIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapComponent_Statics::NewProp_OverlayTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapComponent_Statics::ClassParams = {
		&UMapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapComponent, 980289809);
	template<> USERINTERFACE_API UClass* StaticClass<UMapComponent>()
	{
		return UMapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapComponent(Z_Construct_UClass_UMapComponent, &UMapComponent::StaticClass, TEXT("/Script/UserInterface"), TEXT("UMapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
