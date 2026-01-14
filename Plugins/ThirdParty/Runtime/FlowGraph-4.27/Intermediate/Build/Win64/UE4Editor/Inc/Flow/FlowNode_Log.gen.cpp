// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Utils/FlowNode_Log.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_Log() {}
// Cross Module References
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowLogVerbosity();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Log_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Log();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EFlowLogVerbosity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Flow_EFlowLogVerbosity, Z_Construct_UPackage__Script_Flow(), TEXT("EFlowLogVerbosity"));
		}
		return Singleton;
	}
	template<> FLOW_API UEnum* StaticEnum<EFlowLogVerbosity>()
	{
		return EFlowLogVerbosity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowLogVerbosity(EFlowLogVerbosity_StaticEnum, TEXT("/Script/Flow"), TEXT("EFlowLogVerbosity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Flow_EFlowLogVerbosity_Hash() { return 2439865011U; }
	UEnum* Z_Construct_UEnum_Flow_EFlowLogVerbosity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowLogVerbosity"), 0, Get_Z_Construct_UEnum_Flow_EFlowLogVerbosity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowLogVerbosity::Error", (int64)EFlowLogVerbosity::Error },
				{ "EFlowLogVerbosity::Warning", (int64)EFlowLogVerbosity::Warning },
				{ "EFlowLogVerbosity::Display", (int64)EFlowLogVerbosity::Display },
				{ "EFlowLogVerbosity::Log", (int64)EFlowLogVerbosity::Log },
				{ "EFlowLogVerbosity::Verbose", (int64)EFlowLogVerbosity::Verbose },
				{ "EFlowLogVerbosity::VeryVerbose", (int64)EFlowLogVerbosity::VeryVerbose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Variant of ELogVerbosity\n" },
				{ "Display.Name", "EFlowLogVerbosity::Display" },
				{ "Display.ToolTip", "Prints a message to console (and log file)" },
				{ "Error.Name", "EFlowLogVerbosity::Error" },
				{ "Error.ToolTip", "Prints a message to console (and log file)" },
				{ "Log.Name", "EFlowLogVerbosity::Log" },
				{ "Log.ToolTip", "Prints a message to a log file (does not print to console)" },
				{ "ModuleRelativePath", "Public/Nodes/Utils/FlowNode_Log.h" },
				{ "ToolTip", "Variant of ELogVerbosity" },
				{ "Verbose.Name", "EFlowLogVerbosity::Verbose" },
				{ "Verbose.ToolTip", "Prints a verbose message to a log file (if Verbose logging is enabled for the given category, usually used for detailed logging)" },
				{ "VeryVerbose.Name", "EFlowLogVerbosity::VeryVerbose" },
				{ "VeryVerbose.ToolTip", "Prints a verbose message to a log file (if VeryVerbose logging is enabled, usually used for detailed logging that would otherwise spam output)" },
				{ "Warning.Name", "EFlowLogVerbosity::Warning" },
				{ "Warning.ToolTip", "Prints a message to console (and log file)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Flow,
				nullptr,
				"EFlowLogVerbosity",
				"EFlowLogVerbosity",
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
	void UFlowNode_Log::StaticRegisterNativesUFlowNode_Log()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_Log_NoRegister()
	{
		return UFlowNode_Log::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_Log_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_Log_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Log_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds message to log\n * Optionally shows message on screen\n */" },
		{ "DisplayName", "Log" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Utils/FlowNode_Log.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Utils/FlowNode_Log.h" },
		{ "ToolTip", "Adds message to log\nOptionally shows message on screen" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/Nodes/Utils/FlowNode_Log.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Log, Message), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Verbosity_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/Nodes/Utils/FlowNode_Log.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Log, Verbosity), Z_Construct_UEnum_Flow_EFlowLogVerbosity, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Verbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Verbosity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/Nodes/Utils/FlowNode_Log.h" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((UFlowNode_Log*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_Log), &Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Flow" },
		{ "EditCondition", "bPrintToScreen" },
		{ "ModuleRelativePath", "Public/Nodes/Utils/FlowNode_Log.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Log, Duration), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_TextColor_MetaData[] = {
		{ "Category", "Flow" },
		{ "EditCondition", "bPrintToScreen" },
		{ "ModuleRelativePath", "Public/Nodes/Utils/FlowNode_Log.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Log, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_Log_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Verbosity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Verbosity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Log_Statics::NewProp_TextColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_Log_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_Log>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_Log_Statics::ClassParams = {
		&UFlowNode_Log::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_Log_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Log_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Log_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Log_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_Log()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_Log_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_Log, 1759884822);
	template<> FLOW_API UClass* StaticClass<UFlowNode_Log>()
	{
		return UFlowNode_Log::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_Log(Z_Construct_UClass_UFlowNode_Log, &UFlowNode_Log::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_Log"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_Log);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
