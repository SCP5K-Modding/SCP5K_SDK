// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAttachment() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAttachmentData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSCosmetic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData();
// End Cross Module References
	DEFINE_FUNCTION(AFPSAttachment::execApplyCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmetic(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execApplyCosmeticByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmeticByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execAttach)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_GET_STRUCT(FTransform,Z_Param_NewRelativeTransform);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewAttachSocket);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Attach_Implementation(Z_Param_Item,Z_Param_NewRelativeTransform,Z_Param_NewAttachSocket,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetAttachmentData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFPSAttachmentData**)Z_Param__Result=P_THIS->GetAttachmentData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetAttachMesh)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttachSocket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetAttachMesh(Z_Param_Out_AttachSocket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetAttachMeshes)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_FirstPersonMesh);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ThirdPersonMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttachMeshes(Z_Param_Out_FirstPersonMesh,Z_Param_Out_ThirdPersonMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetAttachSocket)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_RotationOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetAttachSocket(Z_Param_Out_RotationOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetAudioComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFMODAudioComponent**)Z_Param__Result=P_THIS->GetAudioComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetFirstPersonMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetFirstPersonMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetFirstPersonRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetFirstPersonRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetOwningItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSItem**)Z_Param__Result=P_THIS->GetOwningItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetThirdPersonMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetThirdPersonMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execGetThirdPersonRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetThirdPersonRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnApplyCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FFPSCosmetic,Z_Param_Cosmetic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnApplyCosmetic_Implementation(Z_Param_Index,Z_Param_Cosmetic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnDequip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDequip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnParentItemDataLoaded)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParentItemDataLoaded(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnRep_AttachmentReplicatedData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachmentReplicatedData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnRep_IsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsEnabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnRep_OwningItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OwningItem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnUpdateADS)
	{
		P_GET_UBOOL(Z_Param_bNewADS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateADS_Implementation(Z_Param_bNewADS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execOnUpdateNightVision)
	{
		P_GET_UBOOL(Z_Param_bIsNightVision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateNightVision_Implementation(Z_Param_bIsNightVision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execServerAttach)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_GET_STRUCT(FTransform,Z_Param_NewRelativeTransform);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewAttachSocket);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAttach_Implementation(Z_Param_Item,Z_Param_NewRelativeTransform,Z_Param_NewAttachSocket,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execServerSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetEnabled_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execSetAttachmentPerspective)
	{
		P_GET_UBOOL(Z_Param_bIsFirstPerson);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachmentPerspective_Implementation(Z_Param_bIsFirstPerson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execSetAttachmentVisibility)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachmentVisibility_Implementation(Z_Param_bNewVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execSetAttachMeshes)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_FirstPersonMesh);
		P_GET_OBJECT(USceneComponent,Z_Param_ThirdPersonMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachMeshes(Z_Param_FirstPersonMesh,Z_Param_ThirdPersonMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execSetIsEnabled)
	{
		P_GET_UBOOL(Z_Param_NewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsEnabled(Z_Param_NewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execSetOwningItem)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_NewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwningItem(Z_Param_NewItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSAttachment::execSetupAttachmentData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAttachmentData_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AFPSAttachment_Attach = FName(TEXT("Attach"));
	bool AFPSAttachment::Attach(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot)
	{
		FPSAttachment_eventAttach_Parms Parms;
		Parms.Item=Item;
		Parms.NewRelativeTransform=NewRelativeTransform;
		Parms.NewAttachSocket=NewAttachSocket;
		Parms.Slot=Slot;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_Attach),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSAttachment_OnApplyCosmetic = FName(TEXT("OnApplyCosmetic"));
	void AFPSAttachment::OnApplyCosmetic(int32 Index, FFPSCosmetic Cosmetic)
	{
		FPSAttachment_eventOnApplyCosmetic_Parms Parms;
		Parms.Index=Index;
		Parms.Cosmetic=Cosmetic;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnApplyCosmetic),&Parms);
	}
	static FName NAME_AFPSAttachment_OnDeath = FName(TEXT("OnDeath"));
	void AFPSAttachment::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnDeath),NULL);
	}
	static FName NAME_AFPSAttachment_OnDequip = FName(TEXT("OnDequip"));
	void AFPSAttachment::OnDequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnDequip),NULL);
	}
	static FName NAME_AFPSAttachment_OnEquip = FName(TEXT("OnEquip"));
	void AFPSAttachment::OnEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnEquip),NULL);
	}
	static FName NAME_AFPSAttachment_OnRep_AttachmentReplicatedData = FName(TEXT("OnRep_AttachmentReplicatedData"));
	void AFPSAttachment::OnRep_AttachmentReplicatedData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnRep_AttachmentReplicatedData),NULL);
	}
	static FName NAME_AFPSAttachment_OnRep_IsEnabled = FName(TEXT("OnRep_IsEnabled"));
	void AFPSAttachment::OnRep_IsEnabled()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnRep_IsEnabled),NULL);
	}
	static FName NAME_AFPSAttachment_OnRep_OwningItem = FName(TEXT("OnRep_OwningItem"));
	void AFPSAttachment::OnRep_OwningItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnRep_OwningItem),NULL);
	}
	static FName NAME_AFPSAttachment_OnUpdateADS = FName(TEXT("OnUpdateADS"));
	void AFPSAttachment::OnUpdateADS(bool bNewADS)
	{
		FPSAttachment_eventOnUpdateADS_Parms Parms;
		Parms.bNewADS=bNewADS ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnUpdateADS),&Parms);
	}
	static FName NAME_AFPSAttachment_OnUpdateNightVision = FName(TEXT("OnUpdateNightVision"));
	void AFPSAttachment::OnUpdateNightVision(bool bIsNightVision)
	{
		FPSAttachment_eventOnUpdateNightVision_Parms Parms;
		Parms.bIsNightVision=bIsNightVision ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_OnUpdateNightVision),&Parms);
	}
	static FName NAME_AFPSAttachment_ServerAttach = FName(TEXT("ServerAttach"));
	void AFPSAttachment::ServerAttach(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot)
	{
		FPSAttachment_eventServerAttach_Parms Parms;
		Parms.Item=Item;
		Parms.NewRelativeTransform=NewRelativeTransform;
		Parms.NewAttachSocket=NewAttachSocket;
		Parms.Slot=Slot;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_ServerAttach),&Parms);
	}
	static FName NAME_AFPSAttachment_ServerSetEnabled = FName(TEXT("ServerSetEnabled"));
	void AFPSAttachment::ServerSetEnabled(bool bEnabled)
	{
		FPSAttachment_eventServerSetEnabled_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_ServerSetEnabled),&Parms);
	}
	static FName NAME_AFPSAttachment_SetAttachmentPerspective = FName(TEXT("SetAttachmentPerspective"));
	void AFPSAttachment::SetAttachmentPerspective(bool bIsFirstPerson)
	{
		FPSAttachment_eventSetAttachmentPerspective_Parms Parms;
		Parms.bIsFirstPerson=bIsFirstPerson ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_SetAttachmentPerspective),&Parms);
	}
	static FName NAME_AFPSAttachment_SetAttachmentVisibility = FName(TEXT("SetAttachmentVisibility"));
	void AFPSAttachment::SetAttachmentVisibility(bool bNewVisibility)
	{
		FPSAttachment_eventSetAttachmentVisibility_Parms Parms;
		Parms.bNewVisibility=bNewVisibility ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_SetAttachmentVisibility),&Parms);
	}
	static FName NAME_AFPSAttachment_SetEnabled = FName(TEXT("SetEnabled"));
	void AFPSAttachment::SetEnabled(bool bEnabled)
	{
		FPSAttachment_eventSetEnabled_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_SetEnabled),&Parms);
	}
	static FName NAME_AFPSAttachment_SetupAttachmentData = FName(TEXT("SetupAttachmentData"));
	void AFPSAttachment::SetupAttachmentData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSAttachment_SetupAttachmentData),NULL);
	}
	void AFPSAttachment::StaticRegisterNativesAFPSAttachment()
	{
		UClass* Class = AFPSAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCosmetic", &AFPSAttachment::execApplyCosmetic },
			{ "ApplyCosmeticByName", &AFPSAttachment::execApplyCosmeticByName },
			{ "Attach", &AFPSAttachment::execAttach },
			{ "GetAttachmentData", &AFPSAttachment::execGetAttachmentData },
			{ "GetAttachMesh", &AFPSAttachment::execGetAttachMesh },
			{ "GetAttachMeshes", &AFPSAttachment::execGetAttachMeshes },
			{ "GetAttachSocket", &AFPSAttachment::execGetAttachSocket },
			{ "GetAudioComponent", &AFPSAttachment::execGetAudioComponent },
			{ "GetFirstPersonMesh", &AFPSAttachment::execGetFirstPersonMesh },
			{ "GetFirstPersonRoot", &AFPSAttachment::execGetFirstPersonRoot },
			{ "GetOwningItem", &AFPSAttachment::execGetOwningItem },
			{ "GetRelativeTransform", &AFPSAttachment::execGetRelativeTransform },
			{ "GetThirdPersonMesh", &AFPSAttachment::execGetThirdPersonMesh },
			{ "GetThirdPersonRoot", &AFPSAttachment::execGetThirdPersonRoot },
			{ "OnApplyCosmetic", &AFPSAttachment::execOnApplyCosmetic },
			{ "OnDeath", &AFPSAttachment::execOnDeath },
			{ "OnDequip", &AFPSAttachment::execOnDequip },
			{ "OnEquip", &AFPSAttachment::execOnEquip },
			{ "OnParentItemDataLoaded", &AFPSAttachment::execOnParentItemDataLoaded },
			{ "OnRep_AttachmentReplicatedData", &AFPSAttachment::execOnRep_AttachmentReplicatedData },
			{ "OnRep_IsEnabled", &AFPSAttachment::execOnRep_IsEnabled },
			{ "OnRep_OwningItem", &AFPSAttachment::execOnRep_OwningItem },
			{ "OnUpdateADS", &AFPSAttachment::execOnUpdateADS },
			{ "OnUpdateNightVision", &AFPSAttachment::execOnUpdateNightVision },
			{ "ServerAttach", &AFPSAttachment::execServerAttach },
			{ "ServerSetEnabled", &AFPSAttachment::execServerSetEnabled },
			{ "SetAttachmentPerspective", &AFPSAttachment::execSetAttachmentPerspective },
			{ "SetAttachmentVisibility", &AFPSAttachment::execSetAttachmentVisibility },
			{ "SetAttachMeshes", &AFPSAttachment::execSetAttachMeshes },
			{ "SetEnabled", &AFPSAttachment::execSetEnabled },
			{ "SetIsEnabled", &AFPSAttachment::execSetIsEnabled },
			{ "SetOwningItem", &AFPSAttachment::execSetOwningItem },
			{ "SetupAttachmentData", &AFPSAttachment::execSetupAttachmentData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics
	{
		struct FPSAttachment_eventApplyCosmetic_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventApplyCosmetic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "ApplyCosmetic", nullptr, nullptr, sizeof(FPSAttachment_eventApplyCosmetic_Parms), Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics
	{
		struct FPSAttachment_eventApplyCosmeticByName_Parms
		{
			FName Name;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventApplyCosmeticByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "ApplyCosmeticByName", nullptr, nullptr, sizeof(FPSAttachment_eventApplyCosmeticByName_Parms), Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_Attach_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewAttachSocket;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventAttach_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_NewRelativeTransform = { "NewRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventAttach_Parms, NewRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_NewAttachSocket = { "NewAttachSocket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventAttach_Parms, NewAttachSocket), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventAttach_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSAttachment_eventAttach_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAttachment_eventAttach_Parms), &Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_Attach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_NewRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_NewAttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_Attach_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_Attach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_Attach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "Attach", nullptr, nullptr, sizeof(FPSAttachment_eventAttach_Parms), Z_Construct_UFunction_AFPSAttachment_Attach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_Attach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_Attach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_Attach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_Attach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_Attach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics
	{
		struct FPSAttachment_eventGetAttachmentData_Parms
		{
			UFPSAttachmentData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetAttachmentData_Parms, ReturnValue), Z_Construct_UClass_UFPSAttachmentData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetAttachmentData", nullptr, nullptr, sizeof(FPSAttachment_eventGetAttachmentData_Parms), Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetAttachmentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetAttachmentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics
	{
		struct FPSAttachment_eventGetAttachMesh_Parms
		{
			FName AttachSocket;
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetAttachMesh_Parms, AttachSocket), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetAttachMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::NewProp_AttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetAttachMesh", nullptr, nullptr, sizeof(FPSAttachment_eventGetAttachMesh_Parms), Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetAttachMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetAttachMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics
	{
		struct FPSAttachment_eventGetAttachMeshes_Parms
		{
			USceneComponent* FirstPersonMesh;
			USceneComponent* ThirdPersonMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_FirstPersonMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetAttachMeshes_Parms, FirstPersonMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_FirstPersonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_FirstPersonMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_ThirdPersonMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_ThirdPersonMesh = { "ThirdPersonMesh", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetAttachMeshes_Parms, ThirdPersonMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_ThirdPersonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_ThirdPersonMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_FirstPersonMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::NewProp_ThirdPersonMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetAttachMeshes", nullptr, nullptr, sizeof(FPSAttachment_eventGetAttachMeshes_Parms), Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics
	{
		struct FPSAttachment_eventGetAttachSocket_Parms
		{
			FRotator RotationOffset;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetAttachSocket_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetAttachSocket_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetAttachSocket", nullptr, nullptr, sizeof(FPSAttachment_eventGetAttachSocket_Parms), Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetAttachSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetAttachSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics
	{
		struct FPSAttachment_eventGetAudioComponent_Parms
		{
			UFMODAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetAudioComponent", nullptr, nullptr, sizeof(FPSAttachment_eventGetAudioComponent_Parms), Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics
	{
		struct FPSAttachment_eventGetFirstPersonMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetFirstPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetFirstPersonMesh", nullptr, nullptr, sizeof(FPSAttachment_eventGetFirstPersonMesh_Parms), Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics
	{
		struct FPSAttachment_eventGetFirstPersonRoot_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetFirstPersonRoot_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetFirstPersonRoot", nullptr, nullptr, sizeof(FPSAttachment_eventGetFirstPersonRoot_Parms), Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics
	{
		struct FPSAttachment_eventGetOwningItem_Parms
		{
			AFPSItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetOwningItem_Parms, ReturnValue), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetOwningItem", nullptr, nullptr, sizeof(FPSAttachment_eventGetOwningItem_Parms), Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetOwningItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetOwningItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics
	{
		struct FPSAttachment_eventGetRelativeTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetRelativeTransform", nullptr, nullptr, sizeof(FPSAttachment_eventGetRelativeTransform_Parms), Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics
	{
		struct FPSAttachment_eventGetThirdPersonMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetThirdPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetThirdPersonMesh", nullptr, nullptr, sizeof(FPSAttachment_eventGetThirdPersonMesh_Parms), Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics
	{
		struct FPSAttachment_eventGetThirdPersonRoot_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventGetThirdPersonRoot_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "GetThirdPersonRoot", nullptr, nullptr, sizeof(FPSAttachment_eventGetThirdPersonRoot_Parms), Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cosmetic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventOnApplyCosmetic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::NewProp_Cosmetic = { "Cosmetic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventOnApplyCosmetic_Parms, Cosmetic), Z_Construct_UScriptStruct_FFPSCosmetic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::NewProp_Cosmetic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnApplyCosmetic", nullptr, nullptr, sizeof(FPSAttachment_eventOnApplyCosmetic_Parms), Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnDequip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnDequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnDequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnDequip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnDequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnDequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnDequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnDequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics
	{
		struct FPSAttachment_eventOnParentItemDataLoaded_Parms
		{
			AFPSItem* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventOnParentItemDataLoaded_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnParentItemDataLoaded", nullptr, nullptr, sizeof(FPSAttachment_eventOnParentItemDataLoaded_Parms), Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnRep_AttachmentReplicatedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnRep_AttachmentReplicatedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnRep_AttachmentReplicatedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnRep_AttachmentReplicatedData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnRep_AttachmentReplicatedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnRep_AttachmentReplicatedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnRep_AttachmentReplicatedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnRep_AttachmentReplicatedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnRep_IsEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnRep_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnRep_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnRep_IsEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnRep_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnRep_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnRep_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnRep_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnRep_OwningItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnRep_OwningItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnRep_OwningItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnRep_OwningItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnRep_OwningItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnRep_OwningItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnRep_OwningItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnRep_OwningItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics
	{
		static void NewProp_bNewADS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewADS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::NewProp_bNewADS_SetBit(void* Obj)
	{
		((FPSAttachment_eventOnUpdateADS_Parms*)Obj)->bNewADS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::NewProp_bNewADS = { "bNewADS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAttachment_eventOnUpdateADS_Parms), &Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::NewProp_bNewADS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::NewProp_bNewADS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnUpdateADS", nullptr, nullptr, sizeof(FPSAttachment_eventOnUpdateADS_Parms), Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnUpdateADS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnUpdateADS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics
	{
		static void NewProp_bIsNightVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNightVision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::NewProp_bIsNightVision_SetBit(void* Obj)
	{
		((FPSAttachment_eventOnUpdateNightVision_Parms*)Obj)->bIsNightVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::NewProp_bIsNightVision = { "bIsNightVision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAttachment_eventOnUpdateNightVision_Parms), &Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::NewProp_bIsNightVision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::NewProp_bIsNightVision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "OnUpdateNightVision", nullptr, nullptr, sizeof(FPSAttachment_eventOnUpdateNightVision_Parms), Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewAttachSocket;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventServerAttach_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::NewProp_NewRelativeTransform = { "NewRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventServerAttach_Parms, NewRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::NewProp_NewAttachSocket = { "NewAttachSocket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventServerAttach_Parms, NewAttachSocket), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventServerAttach_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::NewProp_NewRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::NewProp_NewAttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "ServerAttach", nullptr, nullptr, sizeof(FPSAttachment_eventServerAttach_Parms), Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_ServerAttach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_ServerAttach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPSAttachment_eventServerSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAttachment_eventServerSetEnabled_Parms), &Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "ServerSetEnabled", nullptr, nullptr, sizeof(FPSAttachment_eventServerSetEnabled_Parms), Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics
	{
		static void NewProp_bIsFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFirstPerson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::NewProp_bIsFirstPerson_SetBit(void* Obj)
	{
		((FPSAttachment_eventSetAttachmentPerspective_Parms*)Obj)->bIsFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::NewProp_bIsFirstPerson = { "bIsFirstPerson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAttachment_eventSetAttachmentPerspective_Parms), &Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::NewProp_bIsFirstPerson_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::NewProp_bIsFirstPerson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "SetAttachmentPerspective", nullptr, nullptr, sizeof(FPSAttachment_eventSetAttachmentPerspective_Parms), Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics
	{
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((FPSAttachment_eventSetAttachmentVisibility_Parms*)Obj)->bNewVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAttachment_eventSetAttachmentVisibility_Parms), &Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "SetAttachmentVisibility", nullptr, nullptr, sizeof(FPSAttachment_eventSetAttachmentVisibility_Parms), Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics
	{
		struct FPSAttachment_eventSetAttachMeshes_Parms
		{
			USceneComponent* FirstPersonMesh;
			USceneComponent* ThirdPersonMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_FirstPersonMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventSetAttachMeshes_Parms, FirstPersonMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_FirstPersonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_FirstPersonMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_ThirdPersonMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_ThirdPersonMesh = { "ThirdPersonMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventSetAttachMeshes_Parms, ThirdPersonMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_ThirdPersonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_ThirdPersonMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_FirstPersonMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::NewProp_ThirdPersonMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "SetAttachMeshes", nullptr, nullptr, sizeof(FPSAttachment_eventSetAttachMeshes_Parms), Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPSAttachment_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAttachment_eventSetEnabled_Parms), &Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "SetEnabled", nullptr, nullptr, sizeof(FPSAttachment_eventSetEnabled_Parms), Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics
	{
		struct FPSAttachment_eventSetIsEnabled_Parms
		{
			bool NewEnabled;
		};
		static void NewProp_NewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::NewProp_NewEnabled_SetBit(void* Obj)
	{
		((FPSAttachment_eventSetIsEnabled_Parms*)Obj)->NewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::NewProp_NewEnabled = { "NewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSAttachment_eventSetIsEnabled_Parms), &Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::NewProp_NewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::NewProp_NewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "SetIsEnabled", nullptr, nullptr, sizeof(FPSAttachment_eventSetIsEnabled_Parms), Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_SetIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_SetIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics
	{
		struct FPSAttachment_eventSetOwningItem_Parms
		{
			AFPSItem* NewItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAttachment_eventSetOwningItem_Parms, NewItem), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "SetOwningItem", nullptr, nullptr, sizeof(FPSAttachment_eventSetOwningItem_Parms), Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_SetOwningItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_SetOwningItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSAttachment_SetupAttachmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSAttachment_SetupAttachmentData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSAttachment_SetupAttachmentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSAttachment, nullptr, "SetupAttachmentData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSAttachment_SetupAttachmentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSAttachment_SetupAttachmentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSAttachment_SetupAttachmentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSAttachment_SetupAttachmentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSAttachment_NoRegister()
	{
		return AFPSAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFPSAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachmentDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentReplicatedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentReplicatedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisplay_MetaData[];
#endif
		static void NewProp_bIsDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BIsEnabled_MetaData[];
#endif
		static void NewProp_BIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenAttached_MetaData[];
#endif
		static void NewProp_bHasBeenAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonAttachComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonAttachComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonAttachComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonAttachComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSAttachment_ApplyCosmetic, "ApplyCosmetic" }, // 1049222478
		{ &Z_Construct_UFunction_AFPSAttachment_ApplyCosmeticByName, "ApplyCosmeticByName" }, // 1867389512
		{ &Z_Construct_UFunction_AFPSAttachment_Attach, "Attach" }, // 864858168
		{ &Z_Construct_UFunction_AFPSAttachment_GetAttachmentData, "GetAttachmentData" }, // 3704530467
		{ &Z_Construct_UFunction_AFPSAttachment_GetAttachMesh, "GetAttachMesh" }, // 3370041138
		{ &Z_Construct_UFunction_AFPSAttachment_GetAttachMeshes, "GetAttachMeshes" }, // 1390646827
		{ &Z_Construct_UFunction_AFPSAttachment_GetAttachSocket, "GetAttachSocket" }, // 327513057
		{ &Z_Construct_UFunction_AFPSAttachment_GetAudioComponent, "GetAudioComponent" }, // 2388234874
		{ &Z_Construct_UFunction_AFPSAttachment_GetFirstPersonMesh, "GetFirstPersonMesh" }, // 1710758509
		{ &Z_Construct_UFunction_AFPSAttachment_GetFirstPersonRoot, "GetFirstPersonRoot" }, // 723277905
		{ &Z_Construct_UFunction_AFPSAttachment_GetOwningItem, "GetOwningItem" }, // 457708786
		{ &Z_Construct_UFunction_AFPSAttachment_GetRelativeTransform, "GetRelativeTransform" }, // 193332659
		{ &Z_Construct_UFunction_AFPSAttachment_GetThirdPersonMesh, "GetThirdPersonMesh" }, // 64760757
		{ &Z_Construct_UFunction_AFPSAttachment_GetThirdPersonRoot, "GetThirdPersonRoot" }, // 186574596
		{ &Z_Construct_UFunction_AFPSAttachment_OnApplyCosmetic, "OnApplyCosmetic" }, // 333314808
		{ &Z_Construct_UFunction_AFPSAttachment_OnDeath, "OnDeath" }, // 699233264
		{ &Z_Construct_UFunction_AFPSAttachment_OnDequip, "OnDequip" }, // 4016648339
		{ &Z_Construct_UFunction_AFPSAttachment_OnEquip, "OnEquip" }, // 4090130565
		{ &Z_Construct_UFunction_AFPSAttachment_OnParentItemDataLoaded, "OnParentItemDataLoaded" }, // 3546662759
		{ &Z_Construct_UFunction_AFPSAttachment_OnRep_AttachmentReplicatedData, "OnRep_AttachmentReplicatedData" }, // 1399523601
		{ &Z_Construct_UFunction_AFPSAttachment_OnRep_IsEnabled, "OnRep_IsEnabled" }, // 3257536745
		{ &Z_Construct_UFunction_AFPSAttachment_OnRep_OwningItem, "OnRep_OwningItem" }, // 330146118
		{ &Z_Construct_UFunction_AFPSAttachment_OnUpdateADS, "OnUpdateADS" }, // 3319197808
		{ &Z_Construct_UFunction_AFPSAttachment_OnUpdateNightVision, "OnUpdateNightVision" }, // 4100475920
		{ &Z_Construct_UFunction_AFPSAttachment_ServerAttach, "ServerAttach" }, // 2491866228
		{ &Z_Construct_UFunction_AFPSAttachment_ServerSetEnabled, "ServerSetEnabled" }, // 2754920158
		{ &Z_Construct_UFunction_AFPSAttachment_SetAttachmentPerspective, "SetAttachmentPerspective" }, // 697918347
		{ &Z_Construct_UFunction_AFPSAttachment_SetAttachmentVisibility, "SetAttachmentVisibility" }, // 1537408998
		{ &Z_Construct_UFunction_AFPSAttachment_SetAttachMeshes, "SetAttachMeshes" }, // 2668976182
		{ &Z_Construct_UFunction_AFPSAttachment_SetEnabled, "SetEnabled" }, // 4123710677
		{ &Z_Construct_UFunction_AFPSAttachment_SetIsEnabled, "SetIsEnabled" }, // 2649130230
		{ &Z_Construct_UFunction_AFPSAttachment_SetOwningItem, "SetOwningItem" }, // 775146400
		{ &Z_Construct_UFunction_AFPSAttachment_SetupAttachmentData, "SetupAttachmentData" }, // 1505603398
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSAttachment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentDataClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentDataClass = { "AttachmentDataClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, AttachmentDataClass), Z_Construct_UClass_UFPSAttachmentData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentDataClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentReplicatedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentReplicatedData = { "AttachmentReplicatedData", "OnRep_AttachmentReplicatedData", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, AttachmentReplicatedData), Z_Construct_UScriptStruct_FFPSAttachmentReplicatedData, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentReplicatedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentReplicatedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bIsDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	void Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bIsDisplay_SetBit(void* Obj)
	{
		((AFPSAttachment*)Obj)->bIsDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bIsDisplay = { "bIsDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSAttachment), &Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bIsDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bIsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bIsDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_BIsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	void Z_Construct_UClass_AFPSAttachment_Statics::NewProp_BIsEnabled_SetBit(void* Obj)
	{
		((AFPSAttachment*)Obj)->BIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_BIsEnabled = { "BIsEnabled", "OnRep_IsEnabled", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSAttachment), &Z_Construct_UClass_AFPSAttachment_Statics::NewProp_BIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_BIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_BIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bHasBeenAttached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	void Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bHasBeenAttached_SetBit(void* Obj)
	{
		((AFPSAttachment*)Obj)->bHasBeenAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bHasBeenAttached = { "bHasBeenAttached", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSAttachment), &Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bHasBeenAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bHasBeenAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bHasBeenAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPerson = { "FirstPerson", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, FirstPerson), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPerson = { "ThirdPerson", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, ThirdPerson), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh3P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh3P = { "Mesh3P", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, Mesh3P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh3P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, AudioComponent), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentData = { "AttachmentData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, AttachmentData), Z_Construct_UClass_UFPSAttachmentData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_OwningItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_OwningItem = { "OwningItem", "OnRep_OwningItem", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, OwningItem), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_OwningItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_OwningItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPersonAttachComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPersonAttachComponent = { "FirstPersonAttachComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, FirstPersonAttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPersonAttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPersonAttachComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPersonAttachComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPersonAttachComponent = { "ThirdPersonAttachComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSAttachment, ThirdPersonAttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPersonAttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPersonAttachComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentReplicatedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bIsDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_BIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_bHasBeenAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_Mesh3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_AttachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_OwningItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_FirstPersonAttachComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSAttachment_Statics::NewProp_ThirdPersonAttachComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSAttachment_Statics::ClassParams = {
		&AFPSAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSAttachment, 3432966283);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSAttachment>()
	{
		return AFPSAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSAttachment(Z_Construct_UClass_AFPSAttachment, &AFPSAttachment::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSAttachment"), false, nullptr, nullptr, nullptr);

	void AFPSAttachment::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AttachmentReplicatedData(TEXT("AttachmentReplicatedData"));
		static const FName Name_BIsEnabled(TEXT("BIsEnabled"));
		static const FName Name_OwningItem(TEXT("OwningItem"));

		const bool bIsValid = true
			&& Name_AttachmentReplicatedData == ClassReps[(int32)ENetFields_Private::AttachmentReplicatedData].Property->GetFName()
			&& Name_BIsEnabled == ClassReps[(int32)ENetFields_Private::BIsEnabled].Property->GetFName()
			&& Name_OwningItem == ClassReps[(int32)ENetFields_Private::OwningItem].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSAttachment"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
