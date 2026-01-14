// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/FlowGraphEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraphEditorSettings() {}
// Cross Module References
	FLOWEDITOR_API UEnum* Z_Construct_UEnum_FlowEditor_EFlowNodeDoubleClickTarget();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphEditorSettings_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphEditorSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* EFlowNodeDoubleClickTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FlowEditor_EFlowNodeDoubleClickTarget, Z_Construct_UPackage__Script_FlowEditor(), TEXT("EFlowNodeDoubleClickTarget"));
		}
		return Singleton;
	}
	template<> FLOWEDITOR_API UEnum* StaticEnum<EFlowNodeDoubleClickTarget>()
	{
		return EFlowNodeDoubleClickTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowNodeDoubleClickTarget(EFlowNodeDoubleClickTarget_StaticEnum, TEXT("/Script/FlowEditor"), TEXT("EFlowNodeDoubleClickTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FlowEditor_EFlowNodeDoubleClickTarget_Hash() { return 3651716623U; }
	UEnum* Z_Construct_UEnum_FlowEditor_EFlowNodeDoubleClickTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FlowEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowNodeDoubleClickTarget"), 0, Get_Z_Construct_UEnum_FlowEditor_EFlowNodeDoubleClickTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowNodeDoubleClickTarget::NodeDefinition", (int64)EFlowNodeDoubleClickTarget::NodeDefinition },
				{ "EFlowNodeDoubleClickTarget::PrimaryAsset", (int64)EFlowNodeDoubleClickTarget::PrimaryAsset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
				{ "NodeDefinition.Name", "EFlowNodeDoubleClickTarget::NodeDefinition" },
				{ "NodeDefinition.Tooltip", "Open node class: either blueprint or C++ class" },
				{ "PrimaryAsset.Name", "EFlowNodeDoubleClickTarget::PrimaryAsset" },
				{ "PrimaryAsset.Tooltip", "Open asset defined as primary asset, i.e. Dialogue asset for PlayDialogue node" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FlowEditor,
				nullptr,
				"EFlowNodeDoubleClickTarget",
				"EFlowNodeDoubleClickTarget",
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
	void UFlowGraphEditorSettings::StaticRegisterNativesUFlowGraphEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UFlowGraphEditorSettings_NoRegister()
	{
		return UFlowGraphEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFlowGraphEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeDoubleClickTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeDoubleClickTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NodeDoubleClickTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNodeClass_MetaData[];
#endif
		static void NewProp_bShowNodeClass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNodeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSubGraphPreview_MetaData[];
#endif
		static void NewProp_bShowSubGraphPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSubGraphPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSubGraphPath_MetaData[];
#endif
		static void NewProp_bShowSubGraphPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSubGraphPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubGraphPreviewSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubGraphPreviewSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighlightInputWiresOfSelectedNodes_MetaData[];
#endif
		static void NewProp_bHighlightInputWiresOfSelectedNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighlightInputWiresOfSelectedNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighlightOutputWiresOfSelectedNodes_MetaData[];
#endif
		static void NewProp_bHighlightOutputWiresOfSelectedNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighlightOutputWiresOfSelectedNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowGraphEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Flow Graph" },
		{ "IncludePath", "Graph/FlowGraphEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_NodeDoubleClickTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_NodeDoubleClickTarget_MetaData[] = {
		{ "Category", "Nodes" },
		{ "Comment", "// Double-clicking a Flow Node might open relevant asset/code editor\n" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
		{ "ToolTip", "Double-clicking a Flow Node might open relevant asset/code editor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_NodeDoubleClickTarget = { "NodeDoubleClickTarget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphEditorSettings, NodeDoubleClickTarget), Z_Construct_UEnum_FlowEditor_EFlowNodeDoubleClickTarget, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_NodeDoubleClickTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_NodeDoubleClickTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowNodeClass_MetaData[] = {
		{ "Category", "Nodes" },
		{ "Comment", "// Displays information on the graph node, either C++ class name or path to blueprint asset\n" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
		{ "ToolTip", "Displays information on the graph node, either C++ class name or path to blueprint asset" },
	};
#endif
	void Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowNodeClass_SetBit(void* Obj)
	{
		((UFlowGraphEditorSettings*)Obj)->bShowNodeClass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowNodeClass = { "bShowNodeClass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowGraphEditorSettings), &Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowNodeClass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowNodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowNodeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPreview_MetaData[] = {
		{ "Category", "Nodes" },
		{ "Comment", "// Renders preview of entire graph while hovering over \n" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
		{ "ToolTip", "Renders preview of entire graph while hovering over" },
	};
#endif
	void Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPreview_SetBit(void* Obj)
	{
		((UFlowGraphEditorSettings*)Obj)->bShowSubGraphPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPreview = { "bShowSubGraphPreview", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowGraphEditorSettings), &Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPath_MetaData[] = {
		{ "Category", "Nodes" },
		{ "EditCondition", "bShowSubGraphPreview" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPath_SetBit(void* Obj)
	{
		((UFlowGraphEditorSettings*)Obj)->bShowSubGraphPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPath = { "bShowSubGraphPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowGraphEditorSettings), &Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_SubGraphPreviewSize_MetaData[] = {
		{ "Category", "Nodes" },
		{ "EditCondition", "bShowSubGraphPreview" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_SubGraphPreviewSize = { "SubGraphPreviewSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphEditorSettings, SubGraphPreviewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_SubGraphPreviewSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_SubGraphPreviewSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightInputWiresOfSelectedNodes_MetaData[] = {
		{ "Category", "Wires" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightInputWiresOfSelectedNodes_SetBit(void* Obj)
	{
		((UFlowGraphEditorSettings*)Obj)->bHighlightInputWiresOfSelectedNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightInputWiresOfSelectedNodes = { "bHighlightInputWiresOfSelectedNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowGraphEditorSettings), &Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightInputWiresOfSelectedNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightInputWiresOfSelectedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightInputWiresOfSelectedNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightOutputWiresOfSelectedNodes_MetaData[] = {
		{ "Category", "Wires" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightOutputWiresOfSelectedNodes_SetBit(void* Obj)
	{
		((UFlowGraphEditorSettings*)Obj)->bHighlightOutputWiresOfSelectedNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightOutputWiresOfSelectedNodes = { "bHighlightOutputWiresOfSelectedNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowGraphEditorSettings), &Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightOutputWiresOfSelectedNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightOutputWiresOfSelectedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightOutputWiresOfSelectedNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowGraphEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_NodeDoubleClickTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_NodeDoubleClickTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowNodeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bShowSubGraphPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_SubGraphPreviewSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightInputWiresOfSelectedNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphEditorSettings_Statics::NewProp_bHighlightOutputWiresOfSelectedNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowGraphEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowGraphEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowGraphEditorSettings_Statics::ClassParams = {
		&UFlowGraphEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowGraphEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowGraphEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowGraphEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowGraphEditorSettings, 3846737927);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowGraphEditorSettings>()
	{
		return UFlowGraphEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowGraphEditorSettings(Z_Construct_UClass_UFlowGraphEditorSettings, &UFlowGraphEditorSettings::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowGraphEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowGraphEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
