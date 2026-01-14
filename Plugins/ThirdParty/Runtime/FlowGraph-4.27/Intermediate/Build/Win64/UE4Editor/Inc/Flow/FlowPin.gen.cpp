// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/FlowPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowPin() {}
// Cross Module References
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowPinActivationType();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FConnectedPin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowOutputPinHandle();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowPinHandle();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowInputPinHandle();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowPin();
// End Cross Module References
	static UEnum* EFlowPinActivationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowPinActivationType, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowPinActivationType"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowPinActivationType>()
	{
		return EFlowPinActivationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowPinActivationType(EFlowPinActivationType_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowPinActivationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowPinActivationType_Hash() { return 1506354050U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowPinActivationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowPinActivationType"), 0, Get_Z_Construct_UEnum_Flow_EFlowPinActivationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowPinActivationType::Default", (int64)EFlowPinActivationType::Default },
				{ "EFlowPinActivationType::Forced", (int64)EFlowPinActivationType::Forced },
				{ "EFlowPinActivationType::PassThrough", (int64)EFlowPinActivationType::PassThrough },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EFlowPinActivationType::Default" },
				{ "Forced.Name", "EFlowPinActivationType::Forced" },
				{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
				{ "PassThrough.Name", "EFlowPinActivationType::PassThrough" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowPinActivationType",
				"EFlowPinActivationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FConnectedPin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FConnectedPin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectedPin, Z_Construct_UPackage__Script_Flow(), TEXT("ConnectedPin"), sizeof(FConnectedPin), Get_Z_Construct_UScriptStruct_FConnectedPin_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FConnectedPin>()
{
	return FConnectedPin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConnectedPin(FConnectedPin::StaticStruct, TEXT("/Script/Flow"), TEXT("ConnectedPin"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFConnectedPin
{
	FScriptStruct_Flow_StaticRegisterNativesFConnectedPin()
	{
		UScriptStruct::DeferCppStructOps<FConnectedPin>(FName(TEXT("ConnectedPin")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFConnectedPin;
	struct Z_Construct_UScriptStruct_FConnectedPin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectedPin_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Processing Flow Nodes creates map of connected pins\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
		{ "ToolTip", "Processing Flow Nodes creates map of connected pins" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectedPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectedPin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectedPin, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectedPin, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_PinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectedPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectedPin_Statics::NewProp_PinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectedPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		nullptr,
		&NewStructOps,
		"ConnectedPin",
		sizeof(FConnectedPin),
		alignof(FConnectedPin),
		Z_Construct_UScriptStruct_FConnectedPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectedPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectedPin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConnectedPin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConnectedPin"), sizeof(FConnectedPin), Get_Z_Construct_UScriptStruct_FConnectedPin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConnectedPin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConnectedPin_Hash() { return 360583646U; }

static_assert(std::is_polymorphic<FFlowOutputPinHandle>() == std::is_polymorphic<FFlowPinHandle>(), "USTRUCT FFlowOutputPinHandle cannot be polymorphic unless super FFlowPinHandle is polymorphic");

class UScriptStruct* FFlowOutputPinHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FFlowOutputPinHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowOutputPinHandle, Z_Construct_UPackage__Script_Flow(), TEXT("FlowOutputPinHandle"), sizeof(FFlowOutputPinHandle), Get_Z_Construct_UScriptStruct_FFlowOutputPinHandle_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FFlowOutputPinHandle>()
{
	return FFlowOutputPinHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowOutputPinHandle(FFlowOutputPinHandle::StaticStruct, TEXT("/Script/Flow"), TEXT("FlowOutputPinHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFFlowOutputPinHandle
{
	FScriptStruct_Flow_StaticRegisterNativesFFlowOutputPinHandle()
	{
		UScriptStruct::DeferCppStructOps<FFlowOutputPinHandle>(FName(TEXT("FlowOutputPinHandle")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFFlowOutputPinHandle;
	struct Z_Construct_UScriptStruct_FFlowOutputPinHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowOutputPinHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowOutputPinHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowOutputPinHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowOutputPinHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		Z_Construct_UScriptStruct_FFlowPinHandle,
		&NewStructOps,
		"FlowOutputPinHandle",
		sizeof(FFlowOutputPinHandle),
		alignof(FFlowOutputPinHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowOutputPinHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowOutputPinHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowOutputPinHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowOutputPinHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowOutputPinHandle"), sizeof(FFlowOutputPinHandle), Get_Z_Construct_UScriptStruct_FFlowOutputPinHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowOutputPinHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowOutputPinHandle_Hash() { return 3672734048U; }

static_assert(std::is_polymorphic<FFlowInputPinHandle>() == std::is_polymorphic<FFlowPinHandle>(), "USTRUCT FFlowInputPinHandle cannot be polymorphic unless super FFlowPinHandle is polymorphic");

class UScriptStruct* FFlowInputPinHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FFlowInputPinHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowInputPinHandle, Z_Construct_UPackage__Script_Flow(), TEXT("FlowInputPinHandle"), sizeof(FFlowInputPinHandle), Get_Z_Construct_UScriptStruct_FFlowInputPinHandle_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FFlowInputPinHandle>()
{
	return FFlowInputPinHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowInputPinHandle(FFlowInputPinHandle::StaticStruct, TEXT("/Script/Flow"), TEXT("FlowInputPinHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFFlowInputPinHandle
{
	FScriptStruct_Flow_StaticRegisterNativesFFlowInputPinHandle()
	{
		UScriptStruct::DeferCppStructOps<FFlowInputPinHandle>(FName(TEXT("FlowInputPinHandle")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFFlowInputPinHandle;
	struct Z_Construct_UScriptStruct_FFlowInputPinHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowInputPinHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowInputPinHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowInputPinHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowInputPinHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		Z_Construct_UScriptStruct_FFlowPinHandle,
		&NewStructOps,
		"FlowInputPinHandle",
		sizeof(FFlowInputPinHandle),
		alignof(FFlowInputPinHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowInputPinHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowInputPinHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowInputPinHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowInputPinHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowInputPinHandle"), sizeof(FFlowInputPinHandle), Get_Z_Construct_UScriptStruct_FFlowInputPinHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowInputPinHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowInputPinHandle_Hash() { return 3286133938U; }
class UScriptStruct* FFlowPinHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FFlowPinHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowPinHandle, Z_Construct_UPackage__Script_Flow(), TEXT("FlowPinHandle"), sizeof(FFlowPinHandle), Get_Z_Construct_UScriptStruct_FFlowPinHandle_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FFlowPinHandle>()
{
	return FFlowPinHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowPinHandle(FFlowPinHandle::StaticStruct, TEXT("/Script/Flow"), TEXT("FlowPinHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFFlowPinHandle
{
	FScriptStruct_Flow_StaticRegisterNativesFFlowPinHandle()
	{
		UScriptStruct::DeferCppStructOps<FFlowPinHandle>(FName(TEXT("FlowPinHandle")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFFlowPinHandle;
	struct Z_Construct_UScriptStruct_FFlowPinHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowPinHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowPinHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowPinHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowPinHandle_Statics::NewProp_PinName_MetaData[] = {
		{ "Comment", "// Update SFlowPinHandleBase code if this property name would be ever changed\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
		{ "ToolTip", "Update SFlowPinHandleBase code if this property name would be ever changed" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFlowPinHandle_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowPinHandle, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowPinHandle_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowPinHandle_Statics::NewProp_PinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowPinHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowPinHandle_Statics::NewProp_PinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowPinHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		nullptr,
		&NewStructOps,
		"FlowPinHandle",
		sizeof(FFlowPinHandle),
		alignof(FFlowPinHandle),
		Z_Construct_UScriptStruct_FFlowPinHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowPinHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowPinHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowPinHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowPinHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowPinHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowPinHandle"), sizeof(FFlowPinHandle), Get_Z_Construct_UScriptStruct_FFlowPinHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowPinHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowPinHandle_Hash() { return 2747870566U; }
class UScriptStruct* FFlowPin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FFlowPin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowPin, Z_Construct_UPackage__Script_Flow(), TEXT("FlowPin"), sizeof(FFlowPin), Get_Z_Construct_UScriptStruct_FFlowPin_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FFlowPin>()
{
	return FFlowPin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowPin(FFlowPin::StaticStruct, TEXT("/Script/Flow"), TEXT("FlowPin"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFFlowPin
{
	FScriptStruct_Flow_StaticRegisterNativesFFlowPin()
	{
		UScriptStruct::DeferCppStructOps<FFlowPin>(FName(TEXT("FlowPin")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFFlowPin;
	struct Z_Construct_UScriptStruct_FFlowPin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinFriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PinFriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinToolTip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowPin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinName_MetaData[] = {
		{ "Category", "FlowPin" },
		{ "Comment", "// A logical name, used during execution of pin\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
		{ "ToolTip", "A logical name, used during execution of pin" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowPin, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinFriendlyName_MetaData[] = {
		{ "Category", "FlowPin" },
		{ "Comment", "// An optional Display Name, you can use it to override PinName without the need to update graph connections\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
		{ "ToolTip", "An optional Display Name, you can use it to override PinName without the need to update graph connections" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinFriendlyName = { "PinFriendlyName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowPin, PinFriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinFriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinFriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinToolTip_MetaData[] = {
		{ "Category", "FlowPin" },
		{ "ModuleRelativePath", "Public/Nodes/FlowPin.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinToolTip = { "PinToolTip", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowPin, PinToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinToolTip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinFriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowPin_Statics::NewProp_PinToolTip,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		nullptr,
		&NewStructOps,
		"FlowPin",
		sizeof(FFlowPin),
		alignof(FFlowPin),
		Z_Construct_UScriptStruct_FFlowPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowPin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowPin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowPin"), sizeof(FFlowPin), Get_Z_Construct_UScriptStruct_FFlowPin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowPin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowPin_Hash() { return 410034285U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
