// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/FlowTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTypes() {}
// Cross Module References
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowOnScreenMessageType();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowTagContainerMatchType();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowNetMode();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowSignalMode();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowFinishPolicy();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowNodeState();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowNodeStyle();
// End Cross Module References
	static UEnum* EFlowOnScreenMessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowOnScreenMessageType, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowOnScreenMessageType"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowOnScreenMessageType>()
	{
		return EFlowOnScreenMessageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowOnScreenMessageType(EFlowOnScreenMessageType_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowOnScreenMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowOnScreenMessageType_Hash() { return 3753990688U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowOnScreenMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowOnScreenMessageType"), 0, Get_Z_Construct_UEnum_Flow_EFlowOnScreenMessageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowOnScreenMessageType::Temporary", (int64)EFlowOnScreenMessageType::Temporary },
				{ "EFlowOnScreenMessageType::Permanent", (int64)EFlowOnScreenMessageType::Permanent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FlowTypes.h" },
				{ "Permanent.Name", "EFlowOnScreenMessageType::Permanent" },
				{ "Temporary.Name", "EFlowOnScreenMessageType::Temporary" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowOnScreenMessageType",
				"EFlowOnScreenMessageType",
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
	static UEnum* EFlowTagContainerMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowTagContainerMatchType, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowTagContainerMatchType"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowTagContainerMatchType>()
	{
		return EFlowTagContainerMatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowTagContainerMatchType(EFlowTagContainerMatchType_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowTagContainerMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowTagContainerMatchType_Hash() { return 488884677U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowTagContainerMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowTagContainerMatchType"), 0, Get_Z_Construct_UEnum_Flow_EFlowTagContainerMatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowTagContainerMatchType::HasAny", (int64)EFlowTagContainerMatchType::HasAny },
				{ "EFlowTagContainerMatchType::HasAnyExact", (int64)EFlowTagContainerMatchType::HasAnyExact },
				{ "EFlowTagContainerMatchType::HasAll", (int64)EFlowTagContainerMatchType::HasAll },
				{ "EFlowTagContainerMatchType::HasAllExact", (int64)EFlowTagContainerMatchType::HasAllExact },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HasAll.Name", "EFlowTagContainerMatchType::HasAll" },
				{ "HasAll.ToolTip", "Check if container A contains ALL of the tags in the specified container B." },
				{ "HasAllExact.Name", "EFlowTagContainerMatchType::HasAllExact" },
				{ "HasAllExact.ToolTip", "Check if container A contains ALL of the tags in the specified container B, only allowing exact matches" },
				{ "HasAny.Name", "EFlowTagContainerMatchType::HasAny" },
				{ "HasAny.ToolTip", "Check if container A contains ANY of the tags in the specified container B." },
				{ "HasAnyExact.Name", "EFlowTagContainerMatchType::HasAnyExact" },
				{ "HasAnyExact.ToolTip", "Check if container A contains ANY of the tags in the specified container B, only allowing exact matches." },
				{ "ModuleRelativePath", "Public/FlowTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowTagContainerMatchType",
				"EFlowTagContainerMatchType",
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
	static UEnum* EFlowNetMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowNetMode, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowNetMode"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowNetMode>()
	{
		return EFlowNetMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowNetMode(EFlowNetMode_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowNetMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowNetMode_Hash() { return 4115266199U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowNetMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowNetMode"), 0, Get_Z_Construct_UEnum_Flow_EFlowNetMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowNetMode::Any", (int64)EFlowNetMode::Any },
				{ "EFlowNetMode::Authority", (int64)EFlowNetMode::Authority },
				{ "EFlowNetMode::ClientOnly", (int64)EFlowNetMode::ClientOnly },
				{ "EFlowNetMode::ServerOnly", (int64)EFlowNetMode::ServerOnly },
				{ "EFlowNetMode::SinglePlayerOnly", (int64)EFlowNetMode::SinglePlayerOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Name", "EFlowNetMode::Any" },
				{ "Any.ToolTip", "Any networking mode." },
				{ "Authority.Name", "EFlowNetMode::Authority" },
				{ "Authority.ToolTip", "Executed on the server or in the single-player (standalone)." },
				{ "BlueprintType", "true" },
				{ "ClientOnly.Name", "EFlowNetMode::ClientOnly" },
				{ "ClientOnly.ToolTip", "Executed locally, on the single client." },
				{ "ModuleRelativePath", "Public/FlowTypes.h" },
				{ "ServerOnly.Name", "EFlowNetMode::ServerOnly" },
				{ "ServerOnly.ToolTip", "Executed on the server." },
				{ "SinglePlayerOnly.Name", "EFlowNetMode::SinglePlayerOnly" },
				{ "SinglePlayerOnly.ToolTip", "Executed only in the single player, not available in multiplayer." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowNetMode",
				"EFlowNetMode",
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
	static UEnum* EFlowSignalMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowSignalMode, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowSignalMode"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowSignalMode>()
	{
		return EFlowSignalMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowSignalMode(EFlowSignalMode_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowSignalMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowSignalMode_Hash() { return 212659297U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowSignalMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowSignalMode"), 0, Get_Z_Construct_UEnum_Flow_EFlowSignalMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowSignalMode::Enabled", (int64)EFlowSignalMode::Enabled },
				{ "EFlowSignalMode::Disabled", (int64)EFlowSignalMode::Disabled },
				{ "EFlowSignalMode::PassThrough", (int64)EFlowSignalMode::PassThrough },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Name", "EFlowSignalMode::Disabled" },
				{ "Disabled.ToolTip", "No logic executed, any Input Pin activation is ignored. Node instantly enters a deactivated state." },
				{ "Enabled.Name", "EFlowSignalMode::Enabled" },
				{ "Enabled.ToolTip", "Default state, node is fully executed." },
				{ "ModuleRelativePath", "Public/FlowTypes.h" },
				{ "PassThrough.Name", "EFlowSignalMode::PassThrough" },
				{ "PassThrough.ToolTip", "Internal node logic not executed. All connected outputs are triggered, node finishes its work." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowSignalMode",
				"EFlowSignalMode",
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
	static UEnum* EFlowFinishPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowFinishPolicy, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowFinishPolicy"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowFinishPolicy>()
	{
		return EFlowFinishPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowFinishPolicy(EFlowFinishPolicy_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowFinishPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowFinishPolicy_Hash() { return 1316212279U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowFinishPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowFinishPolicy"), 0, Get_Z_Construct_UEnum_Flow_EFlowFinishPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowFinishPolicy::Keep", (int64)EFlowFinishPolicy::Keep },
				{ "EFlowFinishPolicy::Abort", (int64)EFlowFinishPolicy::Abort },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abort.Name", "EFlowFinishPolicy::Abort" },
				{ "BlueprintType", "true" },
				{ "Comment", "// Finish Policy value is read by Flow Node\n// Nodes have opportunity to terminate themselves differently if Flow Graph has been aborted\n// Example: Spawn node might despawn all actors if Flow Graph is aborted, not completed\n" },
				{ "Keep.Name", "EFlowFinishPolicy::Keep" },
				{ "ModuleRelativePath", "Public/FlowTypes.h" },
				{ "ToolTip", "Finish Policy value is read by Flow Node\nNodes have opportunity to terminate themselves differently if Flow Graph has been aborted\nExample: Spawn node might despawn all actors if Flow Graph is aborted, not completed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowFinishPolicy",
				"EFlowFinishPolicy",
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
	static UEnum* EFlowNodeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowNodeState, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowNodeState"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowNodeState>()
	{
		return EFlowNodeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowNodeState(EFlowNodeState_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowNodeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowNodeState_Hash() { return 3337753859U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowNodeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowNodeState"), 0, Get_Z_Construct_UEnum_Flow_EFlowNodeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowNodeState::NeverActivated", (int64)EFlowNodeState::NeverActivated },
				{ "EFlowNodeState::Active", (int64)EFlowNodeState::Active },
				{ "EFlowNodeState::Completed", (int64)EFlowNodeState::Completed },
				{ "EFlowNodeState::Aborted", (int64)EFlowNodeState::Aborted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Name", "EFlowNodeState::Aborted" },
				{ "Active.Name", "EFlowNodeState::Active" },
				{ "BlueprintType", "true" },
				{ "Completed.Name", "EFlowNodeState::Completed" },
				{ "ModuleRelativePath", "Public/FlowTypes.h" },
				{ "NeverActivated.Name", "EFlowNodeState::NeverActivated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowNodeState",
				"EFlowNodeState",
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
#if WITH_EDITORONLY_DATA
	static UEnum* EFlowNodeStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowNodeStyle, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowNodeStyle"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowNodeStyle>()
	{
		return EFlowNodeStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowNodeStyle(EFlowNodeStyle_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowNodeStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowNodeStyle_Hash() { return 3455406631U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowNodeStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowNodeStyle"), 0, Get_Z_Construct_UEnum_Flow_EFlowNodeStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowNodeStyle::Condition", (int64)EFlowNodeStyle::Condition },
				{ "EFlowNodeStyle::Default", (int64)EFlowNodeStyle::Default },
				{ "EFlowNodeStyle::InOut", (int64)EFlowNodeStyle::InOut },
				{ "EFlowNodeStyle::Latent", (int64)EFlowNodeStyle::Latent },
				{ "EFlowNodeStyle::Logic", (int64)EFlowNodeStyle::Logic },
				{ "EFlowNodeStyle::SubGraph", (int64)EFlowNodeStyle::SubGraph },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Condition.Name", "EFlowNodeStyle::Condition" },
				{ "Default.Name", "EFlowNodeStyle::Default" },
				{ "InOut.Hidden", "" },
				{ "InOut.Name", "EFlowNodeStyle::InOut" },
				{ "Latent.Name", "EFlowNodeStyle::Latent" },
				{ "Logic.Name", "EFlowNodeStyle::Logic" },
				{ "ModuleRelativePath", "Public/FlowTypes.h" },
				{ "SubGraph.Hidden", "" },
				{ "SubGraph.Name", "EFlowNodeStyle::SubGraph" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowNodeStyle",
				"EFlowNodeStyle",
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
#endif // WITH_EDITORONLY_DATA
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
