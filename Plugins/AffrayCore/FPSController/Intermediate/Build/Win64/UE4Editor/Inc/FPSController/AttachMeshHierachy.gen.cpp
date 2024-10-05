// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/AttachMeshHierachy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachMeshHierachy() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachMeshHierachy();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment_NoRegister();
// End Cross Module References
class UScriptStruct* FAttachMeshHierachy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAttachMeshHierachy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachMeshHierachy, Z_Construct_UPackage__Script_FPSController(), TEXT("AttachMeshHierachy"), sizeof(FAttachMeshHierachy), Get_Z_Construct_UScriptStruct_FAttachMeshHierachy_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FAttachMeshHierachy>()
{
	return FAttachMeshHierachy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttachMeshHierachy(FAttachMeshHierachy::StaticStruct, TEXT("/Script/FPSController"), TEXT("AttachMeshHierachy"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFAttachMeshHierachy
{
	FScriptStruct_FPSController_StaticRegisterNativesFAttachMeshHierachy()
	{
		UScriptStruct::DeferCppStructOps<FAttachMeshHierachy>(FName(TEXT("AttachMeshHierachy")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFAttachMeshHierachy;
	struct Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachments_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Attachments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttachMeshHierachy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachMeshHierachy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachMeshHierachy" },
		{ "ModuleRelativePath", "Public/AttachMeshHierachy.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachMeshHierachy, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_FirstPersonMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachMeshHierachy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AttachMeshHierachy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_FirstPersonMeshComponent = { "FirstPersonMeshComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachMeshHierachy, FirstPersonMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_FirstPersonMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_FirstPersonMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_ThirdPersonMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachMeshHierachy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AttachMeshHierachy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_ThirdPersonMeshComponent = { "ThirdPersonMeshComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachMeshHierachy, ThirdPersonMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_ThirdPersonMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_ThirdPersonMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Attachments_ElementProp = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Attachments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachMeshHierachy" },
		{ "ModuleRelativePath", "Public/AttachMeshHierachy.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachMeshHierachy, Attachments), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Attachments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachMeshHierachy" },
		{ "ModuleRelativePath", "Public/AttachMeshHierachy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachMeshHierachy, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_FirstPersonMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_ThirdPersonMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Attachments_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Attachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"AttachMeshHierachy",
		sizeof(FAttachMeshHierachy),
		alignof(FAttachMeshHierachy),
		Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttachMeshHierachy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttachMeshHierachy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttachMeshHierachy"), sizeof(FAttachMeshHierachy), Get_Z_Construct_UScriptStruct_FAttachMeshHierachy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttachMeshHierachy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttachMeshHierachy_Hash() { return 1128733032U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
