// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightSensing/Public/LightManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightManager() {}
// Cross Module References
	LIGHTSENSING_API UClass* Z_Construct_UClass_ALightManager_NoRegister();
	LIGHTSENSING_API UClass* Z_Construct_UClass_ALightManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LightSensing();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LIGHTSENSING_API UFunction* Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIGHTSENSING_API UScriptStruct* Z_Construct_UScriptStruct_FLightCache();
	LIGHTSENSING_API UScriptStruct* Z_Construct_UScriptStruct_FLightCacheHandle();
// End Cross Module References
	DEFINE_FUNCTION(ALightManager::execAddEventToHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_User);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddEventToHandle(Z_Param_User,Z_Param_Subject,FLightHandleUpdatedEvent(Z_Param_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightManager::execGetLightIntensity)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLightIntensity(Z_Param_position,Z_Param_Out_Intensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightManager::execGetLightIntensityByHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_User);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLightIntensityByHandle(Z_Param_User,Z_Param_Subject,Z_Param_Out_Intensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightManager::execRemoveEventFromHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_User);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveEventFromHandle(Z_Param_User,Z_Param_Subject,FLightHandleUpdatedEvent(Z_Param_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightManager::execRemoveUserFromHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_User);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUserFromHandle(Z_Param_User,Z_Param_Subject);
		P_NATIVE_END;
	}
	void ALightManager::StaticRegisterNativesALightManager()
	{
		UClass* Class = ALightManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEventToHandle", &ALightManager::execAddEventToHandle },
			{ "GetLightIntensity", &ALightManager::execGetLightIntensity },
			{ "GetLightIntensityByHandle", &ALightManager::execGetLightIntensityByHandle },
			{ "RemoveEventFromHandle", &ALightManager::execRemoveEventFromHandle },
			{ "RemoveUserFromHandle", &ALightManager::execRemoveUserFromHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics
	{
		struct LightManager_eventAddEventToHandle_Parms
		{
			UObject* User;
			AActor* Subject;
			FScriptDelegate Event;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventAddEventToHandle_Parms, User), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventAddEventToHandle_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventAddEventToHandle_Parms, Event), Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightManager_eventAddEventToHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightManager_eventAddEventToHandle_Parms), &Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "AddEventToHandle", nullptr, nullptr, sizeof(LightManager_eventAddEventToHandle_Parms), Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_AddEventToHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_AddEventToHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics
	{
		struct LightManager_eventGetLightIntensity_Parms
		{
			FVector position;
			float Intensity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventGetLightIntensity_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventGetLightIntensity_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightManager_eventGetLightIntensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightManager_eventGetLightIntensity_Parms), &Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "GetLightIntensity", nullptr, nullptr, sizeof(LightManager_eventGetLightIntensity_Parms), Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_GetLightIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_GetLightIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics
	{
		struct LightManager_eventGetLightIntensityByHandle_Parms
		{
			UObject* User;
			AActor* Subject;
			float Intensity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventGetLightIntensityByHandle_Parms, User), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventGetLightIntensityByHandle_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventGetLightIntensityByHandle_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightManager_eventGetLightIntensityByHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightManager_eventGetLightIntensityByHandle_Parms), &Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "GetLightIntensityByHandle", nullptr, nullptr, sizeof(LightManager_eventGetLightIntensityByHandle_Parms), Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics
	{
		struct LightManager_eventRemoveEventFromHandle_Parms
		{
			UObject* User;
			AActor* Subject;
			FScriptDelegate Event;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventRemoveEventFromHandle_Parms, User), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventRemoveEventFromHandle_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventRemoveEventFromHandle_Parms, Event), Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightManager_eventRemoveEventFromHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightManager_eventRemoveEventFromHandle_Parms), &Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "RemoveEventFromHandle", nullptr, nullptr, sizeof(LightManager_eventRemoveEventFromHandle_Parms), Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_RemoveEventFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_RemoveEventFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics
	{
		struct LightManager_eventRemoveUserFromHandle_Parms
		{
			UObject* User;
			AActor* Subject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventRemoveUserFromHandle_Parms, User), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventRemoveUserFromHandle_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightManager_eventRemoveUserFromHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightManager_eventRemoveUserFromHandle_Parms), &Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "RemoveUserFromHandle", nullptr, nullptr, sizeof(LightManager_eventRemoveUserFromHandle_Parms), Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_RemoveUserFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_RemoveUserFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightManager_NoRegister()
	{
		return ALightManager::StaticClass();
	}
	struct Z_Construct_UClass_ALightManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CacheDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CacheTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHandleAllocationSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultHandleAllocationSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightIntensityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightIntensityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightVisibilityOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightVisibilityOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSun_MetaData[];
#endif
		static void NewProp_bUseSun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SunDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sun;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cache;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handles_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Handles_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Handles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LightSensing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightManager_AddEventToHandle, "AddEventToHandle" }, // 2155427847
		{ &Z_Construct_UFunction_ALightManager_GetLightIntensity, "GetLightIntensity" }, // 2054038614
		{ &Z_Construct_UFunction_ALightManager_GetLightIntensityByHandle, "GetLightIntensityByHandle" }, // 2283173757
		{ &Z_Construct_UFunction_ALightManager_RemoveEventFromHandle, "RemoveEventFromHandle" }, // 4204811643
		{ &Z_Construct_UFunction_ALightManager_RemoveUserFromHandle, "RemoveUserFromHandle" }, // 1909158931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LightManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_CacheDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_CacheDistance = { "CacheDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, CacheDistance), METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_CacheDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_CacheDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_CacheTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_CacheTime = { "CacheTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, CacheTime), METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_CacheTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_CacheTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_DefaultHandleAllocationSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_DefaultHandleAllocationSize = { "DefaultHandleAllocationSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, DefaultHandleAllocationSize), METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_DefaultHandleAllocationSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_DefaultHandleAllocationSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_LightIntensityThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_LightIntensityThreshold = { "LightIntensityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, LightIntensityThreshold), METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_LightIntensityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_LightIntensityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_LightVisibilityOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_LightVisibilityOffset = { "LightVisibilityOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, LightVisibilityOffset), METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_LightVisibilityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_LightVisibilityOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_bUseSun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	void Z_Construct_UClass_ALightManager_Statics::NewProp_bUseSun_SetBit(void* Obj)
	{
		((ALightManager*)Obj)->bUseSun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_bUseSun = { "bUseSun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALightManager), &Z_Construct_UClass_ALightManager_Statics::NewProp_bUseSun_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_bUseSun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_bUseSun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_SunIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_SunIntensity = { "SunIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, SunIntensity), METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_SunIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_SunIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_AmbientIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_AmbientIntensity = { "AmbientIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, AmbientIntensity), METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_AmbientIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_AmbientIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_SunDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_SunDirection = { "SunDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, SunDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_SunDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_SunDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_Sun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_Sun = { "Sun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, Sun), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_Sun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_Sun_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_Cache_Inner = { "Cache", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLightCache, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_Cache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, Cache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_Cache_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_Handles_ValueProp = { "Handles", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLightCacheHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_Handles_Key_KeyProp = { "Handles_Key", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_Handles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, Handles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_Handles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_Handles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_Lights_Inner = { "Lights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_Lights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "Public/LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_Lights = { "Lights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, Lights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_Lights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_Lights_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_CacheDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_CacheTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_DefaultHandleAllocationSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_LightIntensityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_LightVisibilityOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_bUseSun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_SunIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_AmbientIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_SunDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_Sun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_Cache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_Cache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_Handles_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_Handles_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_Handles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_Lights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_Lights,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightManager_Statics::ClassParams = {
		&ALightManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightManager, 1676265784);
	template<> LIGHTSENSING_API UClass* StaticClass<ALightManager>()
	{
		return ALightManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightManager(Z_Construct_UClass_ALightManager, &ALightManager::StaticClass, TEXT("/Script/LightSensing"), TEXT("ALightManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
