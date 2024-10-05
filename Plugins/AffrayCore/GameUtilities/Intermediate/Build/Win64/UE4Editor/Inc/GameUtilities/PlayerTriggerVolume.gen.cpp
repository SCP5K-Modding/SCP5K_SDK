// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/PlayerTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerTriggerVolume() {}
// Cross Module References
	GAMEUTILITIES_API UClass* Z_Construct_UClass_APlayerTriggerVolume_NoRegister();
	GAMEUTILITIES_API UClass* Z_Construct_UClass_APlayerTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerTriggerVolume::execCanTrigger)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTrigger(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerTriggerVolume::execTriggerEntered)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerEntered_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerTriggerVolume::execTriggerLeft)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerLeft_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	static FName NAME_APlayerTriggerVolume_TriggerEntered = FName(TEXT("TriggerEntered"));
	void APlayerTriggerVolume::TriggerEntered(APawn* Pawn)
	{
		PlayerTriggerVolume_eventTriggerEntered_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_APlayerTriggerVolume_TriggerEntered),&Parms);
	}
	static FName NAME_APlayerTriggerVolume_TriggerLeft = FName(TEXT("TriggerLeft"));
	void APlayerTriggerVolume::TriggerLeft(APawn* Pawn)
	{
		PlayerTriggerVolume_eventTriggerLeft_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_APlayerTriggerVolume_TriggerLeft),&Parms);
	}
	void APlayerTriggerVolume::StaticRegisterNativesAPlayerTriggerVolume()
	{
		UClass* Class = APlayerTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTrigger", &APlayerTriggerVolume::execCanTrigger },
			{ "TriggerEntered", &APlayerTriggerVolume::execTriggerEntered },
			{ "TriggerLeft", &APlayerTriggerVolume::execTriggerLeft },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics
	{
		struct PlayerTriggerVolume_eventCanTrigger_Parms
		{
			AActor* OtherActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerTriggerVolume_eventCanTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerTriggerVolume_eventCanTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerTriggerVolume_eventCanTrigger_Parms), &Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerTriggerVolume, nullptr, "CanTrigger", nullptr, nullptr, sizeof(PlayerTriggerVolume_eventCanTrigger_Parms), Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerTriggerVolume_eventTriggerEntered_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerTriggerVolume, nullptr, "TriggerEntered", nullptr, nullptr, sizeof(PlayerTriggerVolume_eventTriggerEntered_Parms), Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerTriggerVolume_eventTriggerLeft_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerTriggerVolume, nullptr, "TriggerLeft", nullptr, nullptr, sizeof(PlayerTriggerVolume_eventTriggerLeft_Parms), Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerTriggerVolume_NoRegister()
	{
		return APlayerTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_APlayerTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnlyOnServer_MetaData[];
#endif
		static void NewProp_bTriggerOnlyOnServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnlyOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyLocalPlayer_MetaData[];
#endif
		static void NewProp_bOnlyLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyLocalPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreBots_MetaData[];
#endif
		static void NewProp_bIgnoreBots_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreBots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOneUse_MetaData[];
#endif
		static void NewProp_bOneUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOneUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerPlayer_MetaData[];
#endif
		static void NewProp_bPerPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartEnabled_MetaData[];
#endif
		static void NewProp_bStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_GameUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerTriggerVolume_CanTrigger, "CanTrigger" }, // 3693202795
		{ &Z_Construct_UFunction_APlayerTriggerVolume_TriggerEntered, "TriggerEntered" }, // 3565781693
		{ &Z_Construct_UFunction_APlayerTriggerVolume_TriggerLeft, "TriggerLeft" }, // 310553269
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "PlayerTriggerVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bTriggerOnlyOnServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bTriggerOnlyOnServer_SetBit(void* Obj)
	{
		((APlayerTriggerVolume*)Obj)->bTriggerOnlyOnServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bTriggerOnlyOnServer = { "bTriggerOnlyOnServer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerTriggerVolume), &Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bTriggerOnlyOnServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bTriggerOnlyOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bTriggerOnlyOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOnlyLocalPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOnlyLocalPlayer_SetBit(void* Obj)
	{
		((APlayerTriggerVolume*)Obj)->bOnlyLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOnlyLocalPlayer = { "bOnlyLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerTriggerVolume), &Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOnlyLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOnlyLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOnlyLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bIgnoreBots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bIgnoreBots_SetBit(void* Obj)
	{
		((APlayerTriggerVolume*)Obj)->bIgnoreBots = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bIgnoreBots = { "bIgnoreBots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerTriggerVolume), &Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bIgnoreBots_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bIgnoreBots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bIgnoreBots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOneUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOneUse_SetBit(void* Obj)
	{
		((APlayerTriggerVolume*)Obj)->bOneUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOneUse = { "bOneUse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerTriggerVolume), &Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOneUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOneUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOneUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bPerPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bPerPlayer_SetBit(void* Obj)
	{
		((APlayerTriggerVolume*)Obj)->bPerPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bPerPlayer = { "bPerPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerTriggerVolume), &Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bPerPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bPerPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bPerPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bStartEnabled_SetBit(void* Obj)
	{
		((APlayerTriggerVolume*)Obj)->bStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bStartEnabled = { "bStartEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerTriggerVolume), &Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bStartEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_TriggerChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/PlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_TriggerChance = { "TriggerChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerTriggerVolume, TriggerChance), METADATA_PARAMS(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_TriggerChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_TriggerChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bTriggerOnlyOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOnlyLocalPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bIgnoreBots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bOneUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bPerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_bStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTriggerVolume_Statics::NewProp_TriggerChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerTriggerVolume_Statics::ClassParams = {
		&APlayerTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerTriggerVolume, 1559621431);
	template<> GAMEUTILITIES_API UClass* StaticClass<APlayerTriggerVolume>()
	{
		return APlayerTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerTriggerVolume(Z_Construct_UClass_APlayerTriggerVolume, &APlayerTriggerVolume::StaticClass, TEXT("/Script/GameUtilities"), TEXT("APlayerTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
