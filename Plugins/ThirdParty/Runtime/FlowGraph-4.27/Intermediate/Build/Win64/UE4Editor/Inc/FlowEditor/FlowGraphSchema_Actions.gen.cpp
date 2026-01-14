// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/FlowGraphSchema_Actions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraphSchema_Actions() {}
// Cross Module References
	FLOWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	FLOWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste();
	FLOWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FFlowGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FFlowGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FFlowGraphSchemaAction_NewComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOWEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_FlowEditor(), TEXT("FlowGraphSchemaAction_NewComment"), sizeof(FFlowGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Hash());
	}
	return Singleton;
}
template<> FLOWEDITOR_API UScriptStruct* StaticStruct<FFlowGraphSchemaAction_NewComment>()
{
	return FFlowGraphSchemaAction_NewComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowGraphSchemaAction_NewComment(FFlowGraphSchemaAction_NewComment::StaticStruct, TEXT("/Script/FlowEditor"), TEXT("FlowGraphSchemaAction_NewComment"), false, nullptr, nullptr);
static struct FScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_NewComment
{
	FScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_NewComment()
	{
		UScriptStruct::DeferCppStructOps<FFlowGraphSchemaAction_NewComment>(FName(TEXT("FlowGraphSchemaAction_NewComment")));
	}
} ScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_NewComment;
	struct Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphSchema_Actions.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowGraphSchemaAction_NewComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"FlowGraphSchemaAction_NewComment",
		sizeof(FFlowGraphSchemaAction_NewComment),
		alignof(FFlowGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlowEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowGraphSchemaAction_NewComment"), sizeof(FFlowGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewComment_Hash() { return 4140033227U; }

static_assert(std::is_polymorphic<FFlowGraphSchemaAction_Paste>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FFlowGraphSchemaAction_Paste cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FFlowGraphSchemaAction_Paste::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOWEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste, Z_Construct_UPackage__Script_FlowEditor(), TEXT("FlowGraphSchemaAction_Paste"), sizeof(FFlowGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Hash());
	}
	return Singleton;
}
template<> FLOWEDITOR_API UScriptStruct* StaticStruct<FFlowGraphSchemaAction_Paste>()
{
	return FFlowGraphSchemaAction_Paste::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowGraphSchemaAction_Paste(FFlowGraphSchemaAction_Paste::StaticStruct, TEXT("/Script/FlowEditor"), TEXT("FlowGraphSchemaAction_Paste"), false, nullptr, nullptr);
static struct FScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_Paste
{
	FScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_Paste()
	{
		UScriptStruct::DeferCppStructOps<FFlowGraphSchemaAction_Paste>(FName(TEXT("FlowGraphSchemaAction_Paste")));
	}
} ScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_Paste;
	struct Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphSchema_Actions.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowGraphSchemaAction_Paste>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"FlowGraphSchemaAction_Paste",
		sizeof(FFlowGraphSchemaAction_Paste),
		alignof(FFlowGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlowEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowGraphSchemaAction_Paste"), sizeof(FFlowGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_Paste_Hash() { return 692231456U; }

static_assert(std::is_polymorphic<FFlowGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FFlowGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FFlowGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOWEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_FlowEditor(), TEXT("FlowGraphSchemaAction_NewNode"), sizeof(FFlowGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> FLOWEDITOR_API UScriptStruct* StaticStruct<FFlowGraphSchemaAction_NewNode>()
{
	return FFlowGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowGraphSchemaAction_NewNode(FFlowGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/FlowEditor"), TEXT("FlowGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_NewNode
{
	FScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps<FFlowGraphSchemaAction_NewNode>(FName(TEXT("FlowGraphSchemaAction_NewNode")));
	}
} ScriptStruct_FlowEditor_StaticRegisterNativesFFlowGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NodeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphSchema_Actions.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/FlowGraphSchema_Actions.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowGraphSchemaAction_NewNode, NodeClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::NewProp_NodeClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"FlowGraphSchemaAction_NewNode",
		sizeof(FFlowGraphSchemaAction_NewNode),
		alignof(FFlowGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlowEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowGraphSchemaAction_NewNode"), sizeof(FFlowGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowGraphSchemaAction_NewNode_Hash() { return 78571832U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
