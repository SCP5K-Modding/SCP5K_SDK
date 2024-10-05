// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/MapSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSubsystem() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UMapSubsystem_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UMapSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UClass* Z_Construct_UClass_UMapComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapSubsystem::execAddMap)
	{
		P_GET_OBJECT(UMapComponent,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMap(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSubsystem::execGetMap)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMapComponent**)Z_Param__Result=P_THIS->GetMap(Z_Param_MapName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSubsystem::execRemoveMap)
	{
		P_GET_OBJECT(UMapComponent,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMap(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSubsystem::execRemoveMapByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMapByName(Z_Param_MapName);
		P_NATIVE_END;
	}
	void UMapSubsystem::StaticRegisterNativesUMapSubsystem()
	{
		UClass* Class = UMapSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMap", &UMapSubsystem::execAddMap },
			{ "GetMap", &UMapSubsystem::execGetMap },
			{ "RemoveMap", &UMapSubsystem::execRemoveMap },
			{ "RemoveMapByName", &UMapSubsystem::execRemoveMapByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSubsystem_AddMap_Statics
	{
		struct MapSubsystem_eventAddMap_Parms
		{
			UMapComponent* Map;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::NewProp_Map_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSubsystem_eventAddMap_Parms, Map), Z_Construct_UClass_UMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::NewProp_Map,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSubsystem, nullptr, "AddMap", nullptr, nullptr, sizeof(MapSubsystem_eventAddMap_Parms), Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSubsystem_AddMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSubsystem_AddMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSubsystem_GetMap_Statics
	{
		struct MapSubsystem_eventGetMap_Parms
		{
			FName MapName;
			UMapComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSubsystem_eventGetMap_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSubsystem_eventGetMap_Parms, ReturnValue), Z_Construct_UClass_UMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSubsystem, nullptr, "GetMap", nullptr, nullptr, sizeof(MapSubsystem_eventGetMap_Parms), Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSubsystem_GetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSubsystem_GetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics
	{
		struct MapSubsystem_eventRemoveMap_Parms
		{
			UMapComponent* Map;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::NewProp_Map_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSubsystem_eventRemoveMap_Parms, Map), Z_Construct_UClass_UMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::NewProp_Map,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSubsystem, nullptr, "RemoveMap", nullptr, nullptr, sizeof(MapSubsystem_eventRemoveMap_Parms), Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSubsystem_RemoveMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSubsystem_RemoveMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics
	{
		struct MapSubsystem_eventRemoveMapByName_Parms
		{
			FName MapName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSubsystem_eventRemoveMapByName_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSubsystem, nullptr, "RemoveMapByName", nullptr, nullptr, sizeof(MapSubsystem_eventRemoveMapByName_Parms), Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSubsystem_RemoveMapByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSubsystem_RemoveMapByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSubsystem_NoRegister()
	{
		return UMapSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMapSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSubsystem_AddMap, "AddMap" }, // 3337063836
		{ &Z_Construct_UFunction_UMapSubsystem_GetMap, "GetMap" }, // 3762041513
		{ &Z_Construct_UFunction_UMapSubsystem_RemoveMap, "RemoveMap" }, // 3775108530
		{ &Z_Construct_UFunction_UMapSubsystem_RemoveMapByName, "RemoveMapByName" }, // 1329842739
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSubsystem_Statics::ClassParams = {
		&UMapSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMapSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSubsystem, 2036678460);
	template<> USERINTERFACE_API UClass* StaticClass<UMapSubsystem>()
	{
		return UMapSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSubsystem(Z_Construct_UClass_UMapSubsystem, &UMapSubsystem::StaticClass, TEXT("/Script/UserInterface"), TEXT("UMapSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
