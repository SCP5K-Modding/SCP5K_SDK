// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/AttachmentMeshSetup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachmentMeshSetup() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentMeshSetup();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FAttachmentMeshSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAttachmentMeshSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachmentMeshSetup, Z_Construct_UPackage__Script_FPSController(), TEXT("AttachmentMeshSetup"), sizeof(FAttachmentMeshSetup), Get_Z_Construct_UScriptStruct_FAttachmentMeshSetup_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FAttachmentMeshSetup>()
{
	return FAttachmentMeshSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttachmentMeshSetup(FAttachmentMeshSetup::StaticStruct, TEXT("/Script/FPSController"), TEXT("AttachmentMeshSetup"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFAttachmentMeshSetup
{
	FScriptStruct_FPSController_StaticRegisterNativesFAttachmentMeshSetup()
	{
		UScriptStruct::DeferCppStructOps<FAttachmentMeshSetup>(FName(TEXT("AttachmentMeshSetup")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFAttachmentMeshSetup;
	struct Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttachmentMeshSetup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachmentMeshSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentMeshSetup" },
		{ "ModuleRelativePath", "Public/AttachmentMeshSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentMeshSetup, AttachSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_SocketRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentMeshSetup" },
		{ "ModuleRelativePath", "Public/AttachmentMeshSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_SocketRotationOffset = { "SocketRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentMeshSetup, SocketRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_SocketRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_SocketRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttachmentMeshSetup" },
		{ "ModuleRelativePath", "Public/AttachmentMeshSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachMesh = { "AttachMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachmentMeshSetup, AttachMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_SocketRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::NewProp_AttachMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"AttachmentMeshSetup",
		sizeof(FAttachmentMeshSetup),
		alignof(FAttachmentMeshSetup),
		Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttachmentMeshSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttachmentMeshSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttachmentMeshSetup"), sizeof(FAttachmentMeshSetup), Get_Z_Construct_UScriptStruct_FAttachmentMeshSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttachmentMeshSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttachmentMeshSetup_Hash() { return 1743238185U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
