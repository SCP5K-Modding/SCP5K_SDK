// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/UISettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISettings() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UUISettings_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UUISettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	void IUISettings::UIHUDElementUpdated()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UIHUDElementUpdated instead.");
	}
	void UUISettings::StaticRegisterNativesUUISettings()
	{
	}
	struct Z_Construct_UFunction_UUISettings_UIHUDElementUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUISettings_UIHUDElementUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUISettings_UIHUDElementUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUISettings, nullptr, "UIHUDElementUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUISettings_UIHUDElementUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUISettings_UIHUDElementUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUISettings_UIHUDElementUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUISettings_UIHUDElementUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUISettings_NoRegister()
	{
		return UUISettings::StaticClass();
	}
	struct Z_Construct_UClass_UUISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUISettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUISettings_UIHUDElementUpdated, "UIHUDElementUpdated" }, // 1684431934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUISettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UISettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUISettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUISettings_Statics::ClassParams = {
		&UUISettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUISettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUISettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUISettings, 694251203);
	template<> USERINTERFACE_API UClass* StaticClass<UUISettings>()
	{
		return UUISettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUISettings(Z_Construct_UClass_UUISettings, &UUISettings::StaticClass, TEXT("/Script/UserInterface"), TEXT("UUISettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUISettings);
	static FName NAME_UUISettings_UIHUDElementUpdated = FName(TEXT("UIHUDElementUpdated"));
	void IUISettings::Execute_UIHUDElementUpdated(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUISettings::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UUISettings_UIHUDElementUpdated);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
