// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/PlayerObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerObjective() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UPlayerObjective_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UPlayerObjective();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerObjective::execAddPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerObjective::execCreatePlayerObjective)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FTextProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FTextProperty,Z_Param_Description);
		P_GET_PROPERTY(FIntProperty,Z_Param_RequiredAmountPlayers);
		P_GET_UBOOL(Z_Param_UseTimer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimerLength);
		P_GET_UBOOL(Z_Param_RequirePlayersForTimerTick);
		P_GET_UBOOL(Z_Param_bShouldAutoActivateWithParent);
		P_GET_UBOOL(Z_Param_bMajorObjective);
		P_GET_UBOOL(Z_Param_bShouldStartChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayerObjective**)Z_Param__Result=UPlayerObjective::CreatePlayerObjective(Z_Param_Outer,Z_Param_Name,Z_Param_DisplayName,Z_Param_Description,Z_Param_RequiredAmountPlayers,Z_Param_UseTimer,Z_Param_TimerLength,Z_Param_RequirePlayersForTimerTick,Z_Param_bShouldAutoActivateWithParent,Z_Param_bMajorObjective,Z_Param_bShouldStartChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerObjective::execGetCurrentAmountPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmountPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerObjective::execGetRequiredAmountPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRequiredAmountPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerObjective::execOnRep_CurrentPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerObjective::execOnRep_RequiredPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RequiredPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerObjective::execRemovePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerObjective::execSetRequiredPlayers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRequiredPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequiredPlayers(Z_Param_NewRequiredPlayers);
		P_NATIVE_END;
	}
	void UPlayerObjective::StaticRegisterNativesUPlayerObjective()
	{
		UClass* Class = UPlayerObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlayer", &UPlayerObjective::execAddPlayer },
			{ "CreatePlayerObjective", &UPlayerObjective::execCreatePlayerObjective },
			{ "GetCurrentAmountPlayers", &UPlayerObjective::execGetCurrentAmountPlayers },
			{ "GetRequiredAmountPlayers", &UPlayerObjective::execGetRequiredAmountPlayers },
			{ "OnRep_CurrentPlayers", &UPlayerObjective::execOnRep_CurrentPlayers },
			{ "OnRep_RequiredPlayers", &UPlayerObjective::execOnRep_RequiredPlayers },
			{ "RemovePlayer", &UPlayerObjective::execRemovePlayer },
			{ "SetRequiredPlayers", &UPlayerObjective::execSetRequiredPlayers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerObjective_AddPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerObjective_AddPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerObjective_AddPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerObjective, nullptr, "AddPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerObjective_AddPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_AddPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerObjective_AddPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerObjective_AddPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics
	{
		struct PlayerObjective_eventCreatePlayerObjective_Parms
		{
			UObject* Outer;
			FName Name;
			FText DisplayName;
			FText Description;
			int32 RequiredAmountPlayers;
			bool UseTimer;
			float TimerLength;
			bool RequirePlayersForTimerTick;
			bool bShouldAutoActivateWithParent;
			bool bMajorObjective;
			bool bShouldStartChildren;
			UPlayerObjective* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredAmountPlayers;
		static void NewProp_UseTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTimer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerLength;
		static void NewProp_RequirePlayersForTimerTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequirePlayersForTimerTick;
		static void NewProp_bShouldAutoActivateWithParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoActivateWithParent;
		static void NewProp_bMajorObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMajorObjective;
		static void NewProp_bShouldStartChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartChildren;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventCreatePlayerObjective_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventCreatePlayerObjective_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventCreatePlayerObjective_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventCreatePlayerObjective_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_RequiredAmountPlayers = { "RequiredAmountPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventCreatePlayerObjective_Parms, RequiredAmountPlayers), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_UseTimer_SetBit(void* Obj)
	{
		((PlayerObjective_eventCreatePlayerObjective_Parms*)Obj)->UseTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_UseTimer = { "UseTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerObjective_eventCreatePlayerObjective_Parms), &Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_UseTimer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_TimerLength = { "TimerLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventCreatePlayerObjective_Parms, TimerLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_RequirePlayersForTimerTick_SetBit(void* Obj)
	{
		((PlayerObjective_eventCreatePlayerObjective_Parms*)Obj)->RequirePlayersForTimerTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_RequirePlayersForTimerTick = { "RequirePlayersForTimerTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerObjective_eventCreatePlayerObjective_Parms), &Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_RequirePlayersForTimerTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bShouldAutoActivateWithParent_SetBit(void* Obj)
	{
		((PlayerObjective_eventCreatePlayerObjective_Parms*)Obj)->bShouldAutoActivateWithParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bShouldAutoActivateWithParent = { "bShouldAutoActivateWithParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerObjective_eventCreatePlayerObjective_Parms), &Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bShouldAutoActivateWithParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bMajorObjective_SetBit(void* Obj)
	{
		((PlayerObjective_eventCreatePlayerObjective_Parms*)Obj)->bMajorObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bMajorObjective = { "bMajorObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerObjective_eventCreatePlayerObjective_Parms), &Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bMajorObjective_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bShouldStartChildren_SetBit(void* Obj)
	{
		((PlayerObjective_eventCreatePlayerObjective_Parms*)Obj)->bShouldStartChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bShouldStartChildren = { "bShouldStartChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerObjective_eventCreatePlayerObjective_Parms), &Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bShouldStartChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventCreatePlayerObjective_Parms, ReturnValue), Z_Construct_UClass_UPlayerObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_RequiredAmountPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_UseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_TimerLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_RequirePlayersForTimerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bShouldAutoActivateWithParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bMajorObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_bShouldStartChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerObjective, nullptr, "CreatePlayerObjective", nullptr, nullptr, sizeof(PlayerObjective_eventCreatePlayerObjective_Parms), Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics
	{
		struct PlayerObjective_eventGetCurrentAmountPlayers_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventGetCurrentAmountPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerObjective, nullptr, "GetCurrentAmountPlayers", nullptr, nullptr, sizeof(PlayerObjective_eventGetCurrentAmountPlayers_Parms), Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics
	{
		struct PlayerObjective_eventGetRequiredAmountPlayers_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventGetRequiredAmountPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerObjective, nullptr, "GetRequiredAmountPlayers", nullptr, nullptr, sizeof(PlayerObjective_eventGetRequiredAmountPlayers_Parms), Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerObjective_OnRep_CurrentPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerObjective_OnRep_CurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerObjective_OnRep_CurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerObjective, nullptr, "OnRep_CurrentPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerObjective_OnRep_CurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_OnRep_CurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerObjective_OnRep_CurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerObjective_OnRep_CurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerObjective_OnRep_RequiredPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerObjective_OnRep_RequiredPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerObjective_OnRep_RequiredPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerObjective, nullptr, "OnRep_RequiredPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerObjective_OnRep_RequiredPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_OnRep_RequiredPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerObjective_OnRep_RequiredPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerObjective_OnRep_RequiredPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerObjective_RemovePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerObjective_RemovePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerObjective_RemovePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerObjective, nullptr, "RemovePlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerObjective_RemovePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_RemovePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerObjective_RemovePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerObjective_RemovePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics
	{
		struct PlayerObjective_eventSetRequiredPlayers_Parms
		{
			int32 NewRequiredPlayers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewRequiredPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::NewProp_NewRequiredPlayers = { "NewRequiredPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjective_eventSetRequiredPlayers_Parms, NewRequiredPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::NewProp_NewRequiredPlayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerObjective, nullptr, "SetRequiredPlayers", nullptr, nullptr, sizeof(PlayerObjective_eventSetRequiredPlayers_Parms), Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerObjective_NoRegister()
	{
		return UPlayerObjective::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresPlayersForTimer_MetaData[];
#endif
		static void NewProp_bRequiresPlayersForTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresPlayersForTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopUnderRequiredPlayers_MetaData[];
#endif
		static void NewProp_bStopUnderRequiredPlayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopUnderRequiredPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjective,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerObjective_AddPlayer, "AddPlayer" }, // 709309963
		{ &Z_Construct_UFunction_UPlayerObjective_CreatePlayerObjective, "CreatePlayerObjective" }, // 636511344
		{ &Z_Construct_UFunction_UPlayerObjective_GetCurrentAmountPlayers, "GetCurrentAmountPlayers" }, // 897505864
		{ &Z_Construct_UFunction_UPlayerObjective_GetRequiredAmountPlayers, "GetRequiredAmountPlayers" }, // 668708152
		{ &Z_Construct_UFunction_UPlayerObjective_OnRep_CurrentPlayers, "OnRep_CurrentPlayers" }, // 4014275251
		{ &Z_Construct_UFunction_UPlayerObjective_OnRep_RequiredPlayers, "OnRep_RequiredPlayers" }, // 115279867
		{ &Z_Construct_UFunction_UPlayerObjective_RemovePlayer, "RemovePlayer" }, // 2608651322
		{ &Z_Construct_UFunction_UPlayerObjective_SetRequiredPlayers, "SetRequiredPlayers" }, // 4143852900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerObjective_Statics::NewProp_RequiredPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerObjective" },
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerObjective_Statics::NewProp_RequiredPlayers = { "RequiredPlayers", "OnRep_RequiredPlayers", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerObjective, RequiredPlayers), METADATA_PARAMS(Z_Construct_UClass_UPlayerObjective_Statics::NewProp_RequiredPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerObjective_Statics::NewProp_RequiredPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerObjective_Statics::NewProp_CurrentPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerObjective" },
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerObjective_Statics::NewProp_CurrentPlayers = { "CurrentPlayers", "OnRep_CurrentPlayers", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerObjective, CurrentPlayers), METADATA_PARAMS(Z_Construct_UClass_UPlayerObjective_Statics::NewProp_CurrentPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerObjective_Statics::NewProp_CurrentPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bRequiresPlayersForTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerObjective" },
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bRequiresPlayersForTimer_SetBit(void* Obj)
	{
		((UPlayerObjective*)Obj)->bRequiresPlayersForTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bRequiresPlayersForTimer = { "bRequiresPlayersForTimer", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerObjective), &Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bRequiresPlayersForTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bRequiresPlayersForTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bRequiresPlayersForTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bStopUnderRequiredPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerObjective" },
		{ "ModuleRelativePath", "Public/PlayerObjective.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bStopUnderRequiredPlayers_SetBit(void* Obj)
	{
		((UPlayerObjective*)Obj)->bStopUnderRequiredPlayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bStopUnderRequiredPlayers = { "bStopUnderRequiredPlayers", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerObjective), &Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bStopUnderRequiredPlayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bStopUnderRequiredPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bStopUnderRequiredPlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerObjective_Statics::NewProp_RequiredPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerObjective_Statics::NewProp_CurrentPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bRequiresPlayersForTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerObjective_Statics::NewProp_bStopUnderRequiredPlayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerObjective_Statics::ClassParams = {
		&UPlayerObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerObjective_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerObjective, 889561804);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<UPlayerObjective>()
	{
		return UPlayerObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerObjective(Z_Construct_UClass_UPlayerObjective, &UPlayerObjective::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("UPlayerObjective"), false, nullptr, nullptr, nullptr);

	void UPlayerObjective::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RequiredPlayers(TEXT("RequiredPlayers"));
		static const FName Name_CurrentPlayers(TEXT("CurrentPlayers"));
		static const FName Name_bRequiresPlayersForTimer(TEXT("bRequiresPlayersForTimer"));
		static const FName Name_bStopUnderRequiredPlayers(TEXT("bStopUnderRequiredPlayers"));

		const bool bIsValid = true
			&& Name_RequiredPlayers == ClassReps[(int32)ENetFields_Private::RequiredPlayers].Property->GetFName()
			&& Name_CurrentPlayers == ClassReps[(int32)ENetFields_Private::CurrentPlayers].Property->GetFName()
			&& Name_bRequiresPlayersForTimer == ClassReps[(int32)ENetFields_Private::bRequiresPlayersForTimer].Property->GetFName()
			&& Name_bStopUnderRequiredPlayers == ClassReps[(int32)ENetFields_Private::bStopUnderRequiredPlayers].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerObjective"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
