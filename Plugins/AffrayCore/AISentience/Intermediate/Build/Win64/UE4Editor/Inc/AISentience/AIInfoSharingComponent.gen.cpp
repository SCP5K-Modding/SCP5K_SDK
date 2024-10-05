// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AIInfoSharingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIInfoSharingComponent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UAIInfoSharingComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UAIInfoSharingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAISquadInfo();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_ShareInfoMCDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAIInfoSharingComponent::execReceiveSquadInfo)
	{
		P_GET_OBJECT(UAIInfoSharingComponent,Z_Param_OtherInfoSharingComponent);
		P_GET_STRUCT(FSAISquadInfo,Z_Param_OtherSquadInfo);
		P_GET_UBOOL(Z_Param_bFullShare);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveSquadInfo_Implementation(Z_Param_OtherInfoSharingComponent,Z_Param_OtherSquadInfo,Z_Param_bFullShare);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIInfoSharingComponent::execShareAllSquadInfo)
	{
		P_GET_OBJECT(UAIInfoSharingComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShareAllSquadInfo(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIInfoSharingComponent::execShareInfo)
	{
		P_GET_OBJECT(UAIInfoSharingComponent,Z_Param_Target);
		P_GET_UBOOL(Z_Param_bFullShare);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShareInfo(Z_Param_Target,Z_Param_bFullShare);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIInfoSharingComponent::execShareSquadInfo)
	{
		P_GET_OBJECT(UAIInfoSharingComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShareSquadInfo(Z_Param_Target);
		P_NATIVE_END;
	}
	static FName NAME_UAIInfoSharingComponent_ReceiveSquadInfo = FName(TEXT("ReceiveSquadInfo"));
	void UAIInfoSharingComponent::ReceiveSquadInfo(UAIInfoSharingComponent* OtherInfoSharingComponent, FSAISquadInfo OtherSquadInfo, bool bFullShare)
	{
		AIInfoSharingComponent_eventReceiveSquadInfo_Parms Parms;
		Parms.OtherInfoSharingComponent=OtherInfoSharingComponent;
		Parms.OtherSquadInfo=OtherSquadInfo;
		Parms.bFullShare=bFullShare ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAIInfoSharingComponent_ReceiveSquadInfo),&Parms);
	}
	void UAIInfoSharingComponent::StaticRegisterNativesUAIInfoSharingComponent()
	{
		UClass* Class = UAIInfoSharingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveSquadInfo", &UAIInfoSharingComponent::execReceiveSquadInfo },
			{ "ShareAllSquadInfo", &UAIInfoSharingComponent::execShareAllSquadInfo },
			{ "ShareInfo", &UAIInfoSharingComponent::execShareInfo },
			{ "ShareSquadInfo", &UAIInfoSharingComponent::execShareSquadInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherInfoSharingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherInfoSharingComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherSquadInfo;
		static void NewProp_bFullShare_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullShare;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_OtherInfoSharingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_OtherInfoSharingComponent = { "OtherInfoSharingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIInfoSharingComponent_eventReceiveSquadInfo_Parms, OtherInfoSharingComponent), Z_Construct_UClass_UAIInfoSharingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_OtherInfoSharingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_OtherInfoSharingComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_OtherSquadInfo = { "OtherSquadInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIInfoSharingComponent_eventReceiveSquadInfo_Parms, OtherSquadInfo), Z_Construct_UScriptStruct_FSAISquadInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_bFullShare_SetBit(void* Obj)
	{
		((AIInfoSharingComponent_eventReceiveSquadInfo_Parms*)Obj)->bFullShare = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_bFullShare = { "bFullShare", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIInfoSharingComponent_eventReceiveSquadInfo_Parms), &Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_bFullShare_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_OtherInfoSharingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_OtherSquadInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::NewProp_bFullShare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIInfoSharingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIInfoSharingComponent, nullptr, "ReceiveSquadInfo", nullptr, nullptr, sizeof(AIInfoSharingComponent_eventReceiveSquadInfo_Parms), Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics
	{
		struct AIInfoSharingComponent_eventShareAllSquadInfo_Parms
		{
			UAIInfoSharingComponent* Target;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIInfoSharingComponent_eventShareAllSquadInfo_Parms, Target), Z_Construct_UClass_UAIInfoSharingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIInfoSharingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIInfoSharingComponent, nullptr, "ShareAllSquadInfo", nullptr, nullptr, sizeof(AIInfoSharingComponent_eventShareAllSquadInfo_Parms), Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics
	{
		struct AIInfoSharingComponent_eventShareInfo_Parms
		{
			UAIInfoSharingComponent* Target;
			bool bFullShare;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_bFullShare_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullShare;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIInfoSharingComponent_eventShareInfo_Parms, Target), Z_Construct_UClass_UAIInfoSharingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_Target_MetaData)) };
	void Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_bFullShare_SetBit(void* Obj)
	{
		((AIInfoSharingComponent_eventShareInfo_Parms*)Obj)->bFullShare = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_bFullShare = { "bFullShare", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIInfoSharingComponent_eventShareInfo_Parms), &Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_bFullShare_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::NewProp_bFullShare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIInfoSharingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIInfoSharingComponent, nullptr, "ShareInfo", nullptr, nullptr, sizeof(AIInfoSharingComponent_eventShareInfo_Parms), Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics
	{
		struct AIInfoSharingComponent_eventShareSquadInfo_Parms
		{
			UAIInfoSharingComponent* Target;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIInfoSharingComponent_eventShareSquadInfo_Parms, Target), Z_Construct_UClass_UAIInfoSharingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIInfoSharingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIInfoSharingComponent, nullptr, "ShareSquadInfo", nullptr, nullptr, sizeof(AIInfoSharingComponent_eventShareSquadInfo_Parms), Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIInfoSharingComponent_NoRegister()
	{
		return UAIInfoSharingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAIInfoSharingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShareAllInfoMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShareAllInfoMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShareInfoMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShareInfoMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SquadInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIInfoSharingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIInfoSharingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIInfoSharingComponent_ReceiveSquadInfo, "ReceiveSquadInfo" }, // 3102147200
		{ &Z_Construct_UFunction_UAIInfoSharingComponent_ShareAllSquadInfo, "ShareAllSquadInfo" }, // 951952803
		{ &Z_Construct_UFunction_UAIInfoSharingComponent_ShareInfo, "ShareInfo" }, // 4162689558
		{ &Z_Construct_UFunction_UAIInfoSharingComponent_ShareSquadInfo, "ShareSquadInfo" }, // 367384220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoSharingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AIInfoSharingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AIInfoSharingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareAllInfoMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIInfoSharingComponent" },
		{ "ModuleRelativePath", "Public/AIInfoSharingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareAllInfoMCDelegate = { "ShareAllInfoMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIInfoSharingComponent, ShareAllInfoMCDelegate), Z_Construct_UDelegateFunction_AISentience_ShareInfoMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareAllInfoMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareAllInfoMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareInfoMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIInfoSharingComponent" },
		{ "ModuleRelativePath", "Public/AIInfoSharingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareInfoMCDelegate = { "ShareInfoMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIInfoSharingComponent, ShareInfoMCDelegate), Z_Construct_UDelegateFunction_AISentience_ShareInfoMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareInfoMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareInfoMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_SquadInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIInfoSharingComponent" },
		{ "ModuleRelativePath", "Public/AIInfoSharingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_SquadInfo = { "SquadInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIInfoSharingComponent, SquadInfo), Z_Construct_UScriptStruct_FSAISquadInfo, METADATA_PARAMS(Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_SquadInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_SquadInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIInfoSharingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareAllInfoMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_ShareInfoMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIInfoSharingComponent_Statics::NewProp_SquadInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIInfoSharingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIInfoSharingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIInfoSharingComponent_Statics::ClassParams = {
		&UAIInfoSharingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIInfoSharingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoSharingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIInfoSharingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoSharingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIInfoSharingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIInfoSharingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIInfoSharingComponent, 1945792760);
	template<> AISENTIENCE_API UClass* StaticClass<UAIInfoSharingComponent>()
	{
		return UAIInfoSharingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIInfoSharingComponent(Z_Construct_UClass_UAIInfoSharingComponent, &UAIInfoSharingComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("UAIInfoSharingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIInfoSharingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
