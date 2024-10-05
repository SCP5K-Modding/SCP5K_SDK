// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/Electronic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronic() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	ELECTRONICS_API UFunction* Z_Construct_UDelegateFunction_Electronics_ElectronicValueUpdatedDelegate__DelegateSignature();
	ELECTRONICS_API UFunction* Z_Construct_UDelegateFunction_Electronics_ElectronicUpdatedDelegate__DelegateSignature();
	GAMEACTIONS_API UClass* Z_Construct_UClass_UGameAction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AElectronic::execBreak)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Break(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execCanDisable)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDisable(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execCanEnable)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEnable(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execDisable)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execEnable)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execGetCanBeBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanBeBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execGetCanBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanBreak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execGetEnableOnBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableOnBreak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execHasBeenUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBeenUsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execIsBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execIsOneUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOneUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execIsPowered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPowered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execMulticastBreak)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastBreak_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execMulticastDisable)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastDisable_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execMulticastEnable)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEnable_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBreak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnFirstUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFirstUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnHealthChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnRep_bBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnRep_bHasBeenUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bHasBeenUsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnRep_bLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnRep_bPowered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bPowered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnRep_Health)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execOnUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execPlayDisableSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDisableSound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execPlayEnableSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEnableSound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execPower)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Power(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execServerBreak)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBreak_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execServerDisable)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerDisable_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execServerEnable)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEnable_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execServerLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerLock_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execServerPower)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPower_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execServerUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUnlock_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execServerUnPower)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUnPower_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bEnable,Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execSetHasBeenUsed)
	{
		P_GET_UBOOL(Z_Param_bNewHasBeenUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasBeenUsed(Z_Param_bNewHasBeenUsed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execSetPowered)
	{
		P_GET_UBOOL(Z_Param_bPower);
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPowered(Z_Param_bPower,Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execStartLoopingSound)
	{
		P_GET_UBOOL(Z_Param_bRandomPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLoopingSound_Implementation(Z_Param_bRandomPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execToggle)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Toggle(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execUnBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnBreak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronic::execUnPower)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnPower(Z_Param_Caller);
		P_NATIVE_END;
	}
	static FName NAME_AElectronic_MulticastBreak = FName(TEXT("MulticastBreak"));
	void AElectronic::MulticastBreak(AActor* Caller)
	{
		Electronic_eventMulticastBreak_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_MulticastBreak),&Parms);
	}
	static FName NAME_AElectronic_MulticastDisable = FName(TEXT("MulticastDisable"));
	void AElectronic::MulticastDisable(AActor* Caller)
	{
		Electronic_eventMulticastDisable_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_MulticastDisable),&Parms);
	}
	static FName NAME_AElectronic_MulticastEnable = FName(TEXT("MulticastEnable"));
	void AElectronic::MulticastEnable(AActor* Caller)
	{
		Electronic_eventMulticastEnable_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_MulticastEnable),&Parms);
	}
	static FName NAME_AElectronic_OnHealthChanged = FName(TEXT("OnHealthChanged"));
	void AElectronic::OnHealthChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_OnHealthChanged),NULL);
	}
	static FName NAME_AElectronic_PlayDisableSound = FName(TEXT("PlayDisableSound"));
	void AElectronic::PlayDisableSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_PlayDisableSound),NULL);
	}
	static FName NAME_AElectronic_PlayEnableSound = FName(TEXT("PlayEnableSound"));
	void AElectronic::PlayEnableSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_PlayEnableSound),NULL);
	}
	static FName NAME_AElectronic_ReceiveOnBreak = FName(TEXT("ReceiveOnBreak"));
	void AElectronic::ReceiveOnBreak()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ReceiveOnBreak),NULL);
	}
	static FName NAME_AElectronic_ReceiveOnDisable = FName(TEXT("ReceiveOnDisable"));
	void AElectronic::ReceiveOnDisable()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ReceiveOnDisable),NULL);
	}
	static FName NAME_AElectronic_ReceiveOnEnable = FName(TEXT("ReceiveOnEnable"));
	void AElectronic::ReceiveOnEnable()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ReceiveOnEnable),NULL);
	}
	static FName NAME_AElectronic_ReceiveOnFirstUse = FName(TEXT("ReceiveOnFirstUse"));
	void AElectronic::ReceiveOnFirstUse()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ReceiveOnFirstUse),NULL);
	}
	static FName NAME_AElectronic_ReceiveOnLock = FName(TEXT("ReceiveOnLock"));
	void AElectronic::ReceiveOnLock()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ReceiveOnLock),NULL);
	}
	static FName NAME_AElectronic_ReceiveOnUnlock = FName(TEXT("ReceiveOnUnlock"));
	void AElectronic::ReceiveOnUnlock()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ReceiveOnUnlock),NULL);
	}
	static FName NAME_AElectronic_ServerBreak = FName(TEXT("ServerBreak"));
	void AElectronic::ServerBreak(AActor* Caller)
	{
		Electronic_eventServerBreak_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ServerBreak),&Parms);
	}
	static FName NAME_AElectronic_ServerDisable = FName(TEXT("ServerDisable"));
	void AElectronic::ServerDisable(AActor* Caller)
	{
		Electronic_eventServerDisable_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ServerDisable),&Parms);
	}
	static FName NAME_AElectronic_ServerEnable = FName(TEXT("ServerEnable"));
	void AElectronic::ServerEnable(AActor* Caller)
	{
		Electronic_eventServerEnable_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ServerEnable),&Parms);
	}
	static FName NAME_AElectronic_ServerLock = FName(TEXT("ServerLock"));
	void AElectronic::ServerLock()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ServerLock),NULL);
	}
	static FName NAME_AElectronic_ServerPower = FName(TEXT("ServerPower"));
	void AElectronic::ServerPower(AActor* Caller)
	{
		Electronic_eventServerPower_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ServerPower),&Parms);
	}
	static FName NAME_AElectronic_ServerUnlock = FName(TEXT("ServerUnlock"));
	void AElectronic::ServerUnlock()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ServerUnlock),NULL);
	}
	static FName NAME_AElectronic_ServerUnPower = FName(TEXT("ServerUnPower"));
	void AElectronic::ServerUnPower(AActor* Caller)
	{
		Electronic_eventServerUnPower_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_ServerUnPower),&Parms);
	}
	static FName NAME_AElectronic_StartLoopingSound = FName(TEXT("StartLoopingSound"));
	void AElectronic::StartLoopingSound(bool bRandomPosition)
	{
		Electronic_eventStartLoopingSound_Parms Parms;
		Parms.bRandomPosition=bRandomPosition ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AElectronic_StartLoopingSound),&Parms);
	}
	void AElectronic::StaticRegisterNativesAElectronic()
	{
		UClass* Class = AElectronic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Break", &AElectronic::execBreak },
			{ "CanDisable", &AElectronic::execCanDisable },
			{ "CanEnable", &AElectronic::execCanEnable },
			{ "Disable", &AElectronic::execDisable },
			{ "Enable", &AElectronic::execEnable },
			{ "GetCanBeBroken", &AElectronic::execGetCanBeBroken },
			{ "GetCanBreak", &AElectronic::execGetCanBreak },
			{ "GetEnableOnBreak", &AElectronic::execGetEnableOnBreak },
			{ "HasBeenUsed", &AElectronic::execHasBeenUsed },
			{ "IsBroken", &AElectronic::execIsBroken },
			{ "IsEnabled", &AElectronic::execIsEnabled },
			{ "IsOneUse", &AElectronic::execIsOneUse },
			{ "IsPowered", &AElectronic::execIsPowered },
			{ "Lock", &AElectronic::execLock },
			{ "MulticastBreak", &AElectronic::execMulticastBreak },
			{ "MulticastDisable", &AElectronic::execMulticastDisable },
			{ "MulticastEnable", &AElectronic::execMulticastEnable },
			{ "OnBreak", &AElectronic::execOnBreak },
			{ "OnDisable", &AElectronic::execOnDisable },
			{ "OnEnable", &AElectronic::execOnEnable },
			{ "OnFirstUse", &AElectronic::execOnFirstUse },
			{ "OnHealthChanged", &AElectronic::execOnHealthChanged },
			{ "OnLock", &AElectronic::execOnLock },
			{ "OnRep_bBroken", &AElectronic::execOnRep_bBroken },
			{ "OnRep_bEnabled", &AElectronic::execOnRep_bEnabled },
			{ "OnRep_bHasBeenUsed", &AElectronic::execOnRep_bHasBeenUsed },
			{ "OnRep_bLocked", &AElectronic::execOnRep_bLocked },
			{ "OnRep_bPowered", &AElectronic::execOnRep_bPowered },
			{ "OnRep_Health", &AElectronic::execOnRep_Health },
			{ "OnUnlock", &AElectronic::execOnUnlock },
			{ "PlayDisableSound", &AElectronic::execPlayDisableSound },
			{ "PlayEnableSound", &AElectronic::execPlayEnableSound },
			{ "Power", &AElectronic::execPower },
			{ "ServerBreak", &AElectronic::execServerBreak },
			{ "ServerDisable", &AElectronic::execServerDisable },
			{ "ServerEnable", &AElectronic::execServerEnable },
			{ "ServerLock", &AElectronic::execServerLock },
			{ "ServerPower", &AElectronic::execServerPower },
			{ "ServerUnlock", &AElectronic::execServerUnlock },
			{ "ServerUnPower", &AElectronic::execServerUnPower },
			{ "SetEnabled", &AElectronic::execSetEnabled },
			{ "SetHasBeenUsed", &AElectronic::execSetHasBeenUsed },
			{ "SetPowered", &AElectronic::execSetPowered },
			{ "StartLoopingSound", &AElectronic::execStartLoopingSound },
			{ "Toggle", &AElectronic::execToggle },
			{ "UnBreak", &AElectronic::execUnBreak },
			{ "Unlock", &AElectronic::execUnlock },
			{ "UnPower", &AElectronic::execUnPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AElectronic_Break_Statics
	{
		struct Electronic_eventBreak_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_Break_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventBreak_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_Break_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_Break_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_Break_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_Break_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "Break", nullptr, nullptr, sizeof(Electronic_eventBreak_Parms), Z_Construct_UFunction_AElectronic_Break_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Break_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_Break_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Break_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_Break()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_Break_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_CanDisable_Statics
	{
		struct Electronic_eventCanDisable_Parms
		{
			AActor* Caller;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_CanDisable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventCanDisable_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AElectronic_CanDisable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventCanDisable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_CanDisable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventCanDisable_Parms), &Z_Construct_UFunction_AElectronic_CanDisable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_CanDisable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_CanDisable_Statics::NewProp_Caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_CanDisable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_CanDisable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_CanDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "CanDisable", nullptr, nullptr, sizeof(Electronic_eventCanDisable_Parms), Z_Construct_UFunction_AElectronic_CanDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_CanDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_CanDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_CanDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_CanDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_CanDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_CanEnable_Statics
	{
		struct Electronic_eventCanEnable_Parms
		{
			AActor* Caller;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_CanEnable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventCanEnable_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AElectronic_CanEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventCanEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_CanEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventCanEnable_Parms), &Z_Construct_UFunction_AElectronic_CanEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_CanEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_CanEnable_Statics::NewProp_Caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_CanEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_CanEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_CanEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "CanEnable", nullptr, nullptr, sizeof(Electronic_eventCanEnable_Parms), Z_Construct_UFunction_AElectronic_CanEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_CanEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_CanEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_CanEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_CanEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_CanEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_Disable_Statics
	{
		struct Electronic_eventDisable_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_Disable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventDisable_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_Disable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_Disable_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_Disable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "Disable", nullptr, nullptr, sizeof(Electronic_eventDisable_Parms), Z_Construct_UFunction_AElectronic_Disable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Disable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_Enable_Statics
	{
		struct Electronic_eventEnable_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_Enable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventEnable_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_Enable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_Enable_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_Enable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "Enable", nullptr, nullptr, sizeof(Electronic_eventEnable_Parms), Z_Construct_UFunction_AElectronic_Enable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Enable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics
	{
		struct Electronic_eventGetCanBeBroken_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventGetCanBeBroken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventGetCanBeBroken_Parms), &Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "GetCanBeBroken", nullptr, nullptr, sizeof(Electronic_eventGetCanBeBroken_Parms), Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_GetCanBeBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_GetCanBeBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_GetCanBreak_Statics
	{
		struct Electronic_eventGetCanBreak_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventGetCanBreak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventGetCanBreak_Parms), &Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "GetCanBreak", nullptr, nullptr, sizeof(Electronic_eventGetCanBreak_Parms), Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_GetCanBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_GetCanBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics
	{
		struct Electronic_eventGetEnableOnBreak_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventGetEnableOnBreak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventGetEnableOnBreak_Parms), &Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "GetEnableOnBreak", nullptr, nullptr, sizeof(Electronic_eventGetEnableOnBreak_Parms), Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_GetEnableOnBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_GetEnableOnBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics
	{
		struct Electronic_eventHasBeenUsed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventHasBeenUsed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventHasBeenUsed_Parms), &Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "HasBeenUsed", nullptr, nullptr, sizeof(Electronic_eventHasBeenUsed_Parms), Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_HasBeenUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_HasBeenUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_IsBroken_Statics
	{
		struct Electronic_eventIsBroken_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_IsBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventIsBroken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_IsBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventIsBroken_Parms), &Z_Construct_UFunction_AElectronic_IsBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_IsBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_IsBroken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_IsBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_IsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "IsBroken", nullptr, nullptr, sizeof(Electronic_eventIsBroken_Parms), Z_Construct_UFunction_AElectronic_IsBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_IsBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_IsBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_IsBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_IsBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_IsBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_IsEnabled_Statics
	{
		struct Electronic_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventIsEnabled_Parms), &Z_Construct_UFunction_AElectronic_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Electronic_eventIsEnabled_Parms), Z_Construct_UFunction_AElectronic_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_IsOneUse_Statics
	{
		struct Electronic_eventIsOneUse_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_IsOneUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventIsOneUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_IsOneUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventIsOneUse_Parms), &Z_Construct_UFunction_AElectronic_IsOneUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_IsOneUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_IsOneUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_IsOneUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_IsOneUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "IsOneUse", nullptr, nullptr, sizeof(Electronic_eventIsOneUse_Parms), Z_Construct_UFunction_AElectronic_IsOneUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_IsOneUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_IsOneUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_IsOneUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_IsOneUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_IsOneUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_IsPowered_Statics
	{
		struct Electronic_eventIsPowered_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_IsPowered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Electronic_eventIsPowered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_IsPowered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventIsPowered_Parms), &Z_Construct_UFunction_AElectronic_IsPowered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_IsPowered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_IsPowered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_IsPowered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_IsPowered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "IsPowered", nullptr, nullptr, sizeof(Electronic_eventIsPowered_Parms), Z_Construct_UFunction_AElectronic_IsPowered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_IsPowered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_IsPowered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_IsPowered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_IsPowered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_IsPowered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_Lock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_Lock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "Lock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_Lock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Lock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_MulticastBreak_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventMulticastBreak_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "MulticastBreak", nullptr, nullptr, sizeof(Electronic_eventMulticastBreak_Parms), Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_MulticastBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_MulticastBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_MulticastDisable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventMulticastDisable_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "MulticastDisable", nullptr, nullptr, sizeof(Electronic_eventMulticastDisable_Parms), Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_MulticastDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_MulticastDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_MulticastEnable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventMulticastEnable_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "MulticastEnable", nullptr, nullptr, sizeof(Electronic_eventMulticastEnable_Parms), Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_MulticastEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_MulticastEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnBreak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnBreak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnDisable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnDisable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnDisable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnEnable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnEnable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnFirstUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnFirstUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnFirstUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnFirstUse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnFirstUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnFirstUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnFirstUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnFirstUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnHealthChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnHealthChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnLock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnLock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnRep_bBroken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnRep_bBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnRep_bBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnRep_bBroken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnRep_bBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnRep_bBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnRep_bBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnRep_bBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnRep_bHasBeenUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnRep_bHasBeenUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnRep_bHasBeenUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnRep_bHasBeenUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnRep_bHasBeenUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnRep_bHasBeenUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnRep_bHasBeenUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnRep_bHasBeenUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnRep_bLocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnRep_bLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnRep_bLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnRep_bLocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnRep_bLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnRep_bLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnRep_bLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnRep_bLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnRep_bPowered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnRep_bPowered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnRep_bPowered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnRep_bPowered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnRep_bPowered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnRep_bPowered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnRep_bPowered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnRep_bPowered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnRep_Health_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnRep_Health", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_OnUnlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_OnUnlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_OnUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "OnUnlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_OnUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_OnUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_OnUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_OnUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_PlayDisableSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_PlayDisableSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_PlayDisableSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "PlayDisableSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_PlayDisableSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_PlayDisableSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_PlayDisableSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_PlayDisableSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_PlayEnableSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_PlayEnableSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_PlayEnableSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "PlayEnableSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_PlayEnableSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_PlayEnableSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_PlayEnableSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_PlayEnableSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_Power_Statics
	{
		struct Electronic_eventPower_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_Power_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventPower_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_Power_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_Power_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_Power_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "Power", nullptr, nullptr, sizeof(Electronic_eventPower_Parms), Z_Construct_UFunction_AElectronic_Power_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Power_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_Power_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Power_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_Power()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_Power_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ReceiveOnBreak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ReceiveOnBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ReceiveOnBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ReceiveOnBreak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ReceiveOnBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ReceiveOnBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ReceiveOnBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ReceiveOnBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ReceiveOnDisable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ReceiveOnDisable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ReceiveOnDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ReceiveOnDisable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ReceiveOnDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ReceiveOnDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ReceiveOnDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ReceiveOnDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ReceiveOnEnable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ReceiveOnEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ReceiveOnEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ReceiveOnEnable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ReceiveOnEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ReceiveOnEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ReceiveOnEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ReceiveOnEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ReceiveOnFirstUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ReceiveOnFirstUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ReceiveOnFirstUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ReceiveOnFirstUse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ReceiveOnFirstUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ReceiveOnFirstUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ReceiveOnFirstUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ReceiveOnFirstUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ReceiveOnLock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ReceiveOnLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ReceiveOnLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ReceiveOnLock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ReceiveOnLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ReceiveOnLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ReceiveOnLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ReceiveOnLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ReceiveOnUnlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ReceiveOnUnlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ReceiveOnUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ReceiveOnUnlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ReceiveOnUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ReceiveOnUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ReceiveOnUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ReceiveOnUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ServerBreak_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_ServerBreak_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventServerBreak_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_ServerBreak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_ServerBreak_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ServerBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ServerBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ServerBreak", nullptr, nullptr, sizeof(Electronic_eventServerBreak_Parms), Z_Construct_UFunction_AElectronic_ServerBreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerBreak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ServerBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ServerBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ServerBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ServerDisable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_ServerDisable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventServerDisable_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_ServerDisable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_ServerDisable_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ServerDisable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ServerDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ServerDisable", nullptr, nullptr, sizeof(Electronic_eventServerDisable_Parms), Z_Construct_UFunction_AElectronic_ServerDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ServerDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ServerDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ServerDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ServerEnable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_ServerEnable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventServerEnable_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_ServerEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_ServerEnable_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ServerEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ServerEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ServerEnable", nullptr, nullptr, sizeof(Electronic_eventServerEnable_Parms), Z_Construct_UFunction_AElectronic_ServerEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ServerEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ServerEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ServerEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ServerLock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ServerLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ServerLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ServerLock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ServerLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ServerLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ServerLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ServerPower_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_ServerPower_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventServerPower_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_ServerPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_ServerPower_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ServerPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ServerPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ServerPower", nullptr, nullptr, sizeof(Electronic_eventServerPower_Parms), Z_Construct_UFunction_AElectronic_ServerPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ServerPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ServerPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ServerPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ServerUnlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ServerUnlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ServerUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ServerUnlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ServerUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ServerUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ServerUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_ServerUnPower_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventServerUnPower_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "ServerUnPower", nullptr, nullptr, sizeof(Electronic_eventServerUnPower_Parms), Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_ServerUnPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_ServerUnPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_SetEnabled_Statics
	{
		struct Electronic_eventSetEnabled_Parms
		{
			bool bEnable;
			AActor* Caller;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_SetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((Electronic_eventSetEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_SetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventSetEnabled_Parms), &Z_Construct_UFunction_AElectronic_SetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_SetEnabled_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventSetEnabled_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_SetEnabled_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_SetEnabled_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Electronic_eventSetEnabled_Parms), Z_Construct_UFunction_AElectronic_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics
	{
		struct Electronic_eventSetHasBeenUsed_Parms
		{
			bool bNewHasBeenUsed;
		};
		static void NewProp_bNewHasBeenUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewHasBeenUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::NewProp_bNewHasBeenUsed_SetBit(void* Obj)
	{
		((Electronic_eventSetHasBeenUsed_Parms*)Obj)->bNewHasBeenUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::NewProp_bNewHasBeenUsed = { "bNewHasBeenUsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventSetHasBeenUsed_Parms), &Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::NewProp_bNewHasBeenUsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::NewProp_bNewHasBeenUsed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "SetHasBeenUsed", nullptr, nullptr, sizeof(Electronic_eventSetHasBeenUsed_Parms), Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_SetHasBeenUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_SetHasBeenUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_SetPowered_Statics
	{
		struct Electronic_eventSetPowered_Parms
		{
			bool bPower;
			AActor* Caller;
		};
		static void NewProp_bPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPower;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_SetPowered_Statics::NewProp_bPower_SetBit(void* Obj)
	{
		((Electronic_eventSetPowered_Parms*)Obj)->bPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_SetPowered_Statics::NewProp_bPower = { "bPower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventSetPowered_Parms), &Z_Construct_UFunction_AElectronic_SetPowered_Statics::NewProp_bPower_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_SetPowered_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventSetPowered_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_SetPowered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_SetPowered_Statics::NewProp_bPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_SetPowered_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_SetPowered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_SetPowered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "SetPowered", nullptr, nullptr, sizeof(Electronic_eventSetPowered_Parms), Z_Construct_UFunction_AElectronic_SetPowered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_SetPowered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_SetPowered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_SetPowered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_SetPowered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_SetPowered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics
	{
		static void NewProp_bRandomPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::NewProp_bRandomPosition_SetBit(void* Obj)
	{
		((Electronic_eventStartLoopingSound_Parms*)Obj)->bRandomPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::NewProp_bRandomPosition = { "bRandomPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Electronic_eventStartLoopingSound_Parms), &Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::NewProp_bRandomPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::NewProp_bRandomPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "StartLoopingSound", nullptr, nullptr, sizeof(Electronic_eventStartLoopingSound_Parms), Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_StartLoopingSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_StartLoopingSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_Toggle_Statics
	{
		struct Electronic_eventToggle_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_Toggle_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventToggle_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_Toggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_Toggle_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_Toggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_Toggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "Toggle", nullptr, nullptr, sizeof(Electronic_eventToggle_Parms), Z_Construct_UFunction_AElectronic_Toggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Toggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_Toggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Toggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_Toggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_Toggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_UnBreak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_UnBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_UnBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "UnBreak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_UnBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_UnBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_UnBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_UnBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_Unlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_Unlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "Unlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_Unlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronic_UnPower_Statics
	{
		struct Electronic_eventUnPower_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronic_UnPower_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Electronic_eventUnPower_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronic_UnPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronic_UnPower_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronic_UnPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronic_UnPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronic, nullptr, "UnPower", nullptr, nullptr, sizeof(Electronic_eventUnPower_Parms), Z_Construct_UFunction_AElectronic_UnPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_UnPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronic_UnPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronic_UnPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronic_UnPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronic_UnPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AElectronic_NoRegister()
	{
		return AElectronic::StaticClass();
	}
	struct Z_Construct_UClass_AElectronic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPowered_MetaData[];
#endif
		static void NewProp_bPowered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPowered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBroken_MetaData[];
#endif
		static void NewProp_bBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLockOnDisable_MetaData[];
#endif
		static void NewProp_bAutoLockOnDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLockOnDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLockTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoLockTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBreakWhenLocked_MetaData[];
#endif
		static void NewProp_bCanBreakWhenLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBreakWhenLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateEnabledOnPower_MetaData[];
#endif
		static void NewProp_bUpdateEnabledOnPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateEnabledOnPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOneUse_MetaData[];
#endif
		static void NewProp_bOneUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOneUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenUsed_MetaData[];
#endif
		static void NewProp_bHasBeenUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOneShot_MetaData[];
#endif
		static void NewProp_bOneShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOneShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDisable_MetaData[];
#endif
		static void NewProp_bAutoDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDisableTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoDisableTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScript_MetaData[];
#endif
		static void NewProp_bRunConstructionScript_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateEnabledOnBreak_MetaData[];
#endif
		static void NewProp_bUpdateEnabledOnBreak_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateEnabledOnBreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOnBreak_MetaData[];
#endif
		static void NewProp_bEnableOnBreak_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOnBreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeBroken_MetaData[];
#endif
		static void NewProp_bCanBeBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideStartingHealth_MetaData[];
#endif
		static void NewProp_bOverrideStartingHealth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideStartingHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MostRecentInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MostRecentInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDamageTypes_MetaData[];
#endif
		static void NewProp_bUseDamageTypes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDamageTypes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypes_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DamageTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneUseParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OneUseParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneUseSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OneUseSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnableSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisableSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnabledSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopingAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoopingAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnElectronicEnabledChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnElectronicEnabledChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnElectronicPoweredUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnElectronicPoweredUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnElectronicBroken_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnElectronicBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginPlayAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeginPlayAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlayAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndPlayAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnableAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisableAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnPowerAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnPowerAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnLockAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnLockAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElectronicName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ElectronicName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElectronic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElectronic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElectronic_Break, "Break" }, // 2349515127
		{ &Z_Construct_UFunction_AElectronic_CanDisable, "CanDisable" }, // 4190873078
		{ &Z_Construct_UFunction_AElectronic_CanEnable, "CanEnable" }, // 3162857532
		{ &Z_Construct_UFunction_AElectronic_Disable, "Disable" }, // 4208342580
		{ &Z_Construct_UFunction_AElectronic_Enable, "Enable" }, // 1144676178
		{ &Z_Construct_UFunction_AElectronic_GetCanBeBroken, "GetCanBeBroken" }, // 1470435931
		{ &Z_Construct_UFunction_AElectronic_GetCanBreak, "GetCanBreak" }, // 3896755841
		{ &Z_Construct_UFunction_AElectronic_GetEnableOnBreak, "GetEnableOnBreak" }, // 2095302670
		{ &Z_Construct_UFunction_AElectronic_HasBeenUsed, "HasBeenUsed" }, // 1906854215
		{ &Z_Construct_UFunction_AElectronic_IsBroken, "IsBroken" }, // 2797868338
		{ &Z_Construct_UFunction_AElectronic_IsEnabled, "IsEnabled" }, // 2697415964
		{ &Z_Construct_UFunction_AElectronic_IsOneUse, "IsOneUse" }, // 1578904466
		{ &Z_Construct_UFunction_AElectronic_IsPowered, "IsPowered" }, // 548452162
		{ &Z_Construct_UFunction_AElectronic_Lock, "Lock" }, // 3087631600
		{ &Z_Construct_UFunction_AElectronic_MulticastBreak, "MulticastBreak" }, // 1392422693
		{ &Z_Construct_UFunction_AElectronic_MulticastDisable, "MulticastDisable" }, // 2549999584
		{ &Z_Construct_UFunction_AElectronic_MulticastEnable, "MulticastEnable" }, // 699607124
		{ &Z_Construct_UFunction_AElectronic_OnBreak, "OnBreak" }, // 3760249299
		{ &Z_Construct_UFunction_AElectronic_OnDisable, "OnDisable" }, // 1520248451
		{ &Z_Construct_UFunction_AElectronic_OnEnable, "OnEnable" }, // 790971716
		{ &Z_Construct_UFunction_AElectronic_OnFirstUse, "OnFirstUse" }, // 2122184265
		{ &Z_Construct_UFunction_AElectronic_OnHealthChanged, "OnHealthChanged" }, // 1552699738
		{ &Z_Construct_UFunction_AElectronic_OnLock, "OnLock" }, // 3580726670
		{ &Z_Construct_UFunction_AElectronic_OnRep_bBroken, "OnRep_bBroken" }, // 3403245015
		{ &Z_Construct_UFunction_AElectronic_OnRep_bEnabled, "OnRep_bEnabled" }, // 3519314406
		{ &Z_Construct_UFunction_AElectronic_OnRep_bHasBeenUsed, "OnRep_bHasBeenUsed" }, // 2698047462
		{ &Z_Construct_UFunction_AElectronic_OnRep_bLocked, "OnRep_bLocked" }, // 2835092263
		{ &Z_Construct_UFunction_AElectronic_OnRep_bPowered, "OnRep_bPowered" }, // 2701958723
		{ &Z_Construct_UFunction_AElectronic_OnRep_Health, "OnRep_Health" }, // 3020916337
		{ &Z_Construct_UFunction_AElectronic_OnUnlock, "OnUnlock" }, // 637110373
		{ &Z_Construct_UFunction_AElectronic_PlayDisableSound, "PlayDisableSound" }, // 4214434432
		{ &Z_Construct_UFunction_AElectronic_PlayEnableSound, "PlayEnableSound" }, // 1078934847
		{ &Z_Construct_UFunction_AElectronic_Power, "Power" }, // 2353272076
		{ &Z_Construct_UFunction_AElectronic_ReceiveOnBreak, "ReceiveOnBreak" }, // 1635285194
		{ &Z_Construct_UFunction_AElectronic_ReceiveOnDisable, "ReceiveOnDisable" }, // 1555788645
		{ &Z_Construct_UFunction_AElectronic_ReceiveOnEnable, "ReceiveOnEnable" }, // 3853392927
		{ &Z_Construct_UFunction_AElectronic_ReceiveOnFirstUse, "ReceiveOnFirstUse" }, // 2001441473
		{ &Z_Construct_UFunction_AElectronic_ReceiveOnLock, "ReceiveOnLock" }, // 4255714265
		{ &Z_Construct_UFunction_AElectronic_ReceiveOnUnlock, "ReceiveOnUnlock" }, // 3895625730
		{ &Z_Construct_UFunction_AElectronic_ServerBreak, "ServerBreak" }, // 2692684067
		{ &Z_Construct_UFunction_AElectronic_ServerDisable, "ServerDisable" }, // 2299947295
		{ &Z_Construct_UFunction_AElectronic_ServerEnable, "ServerEnable" }, // 1445371957
		{ &Z_Construct_UFunction_AElectronic_ServerLock, "ServerLock" }, // 2477347000
		{ &Z_Construct_UFunction_AElectronic_ServerPower, "ServerPower" }, // 335870530
		{ &Z_Construct_UFunction_AElectronic_ServerUnlock, "ServerUnlock" }, // 3440589173
		{ &Z_Construct_UFunction_AElectronic_ServerUnPower, "ServerUnPower" }, // 1070640230
		{ &Z_Construct_UFunction_AElectronic_SetEnabled, "SetEnabled" }, // 3813020538
		{ &Z_Construct_UFunction_AElectronic_SetHasBeenUsed, "SetHasBeenUsed" }, // 2799307569
		{ &Z_Construct_UFunction_AElectronic_SetPowered, "SetPowered" }, // 524427988
		{ &Z_Construct_UFunction_AElectronic_StartLoopingSound, "StartLoopingSound" }, // 3090752788
		{ &Z_Construct_UFunction_AElectronic_Toggle, "Toggle" }, // 957467363
		{ &Z_Construct_UFunction_AElectronic_UnBreak, "UnBreak" }, // 2344034508
		{ &Z_Construct_UFunction_AElectronic_Unlock, "Unlock" }, // 404954386
		{ &Z_Construct_UFunction_AElectronic_UnPower, "UnPower" }, // 2229026089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Electronic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0021080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bPowered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bPowered_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bPowered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bPowered = { "bPowered", "OnRep_bPowered", (EPropertyFlags)0x0021080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bPowered_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bPowered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bPowered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bBroken_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bBroken = { "bBroken", "OnRep_bBroken", (EPropertyFlags)0x0021080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bBroken_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bLocked = { "bLocked", "OnRep_bLocked", (EPropertyFlags)0x0021080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoLockOnDisable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoLockOnDisable_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bAutoLockOnDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoLockOnDisable = { "bAutoLockOnDisable", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoLockOnDisable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoLockOnDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoLockOnDisable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_AutoLockTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_AutoLockTime = { "AutoLockTime", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, AutoLockTime), METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_AutoLockTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_AutoLockTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBreakWhenLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBreakWhenLocked_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bCanBreakWhenLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBreakWhenLocked = { "bCanBreakWhenLocked", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBreakWhenLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBreakWhenLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBreakWhenLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnPower_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bUpdateEnabledOnPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnPower = { "bUpdateEnabledOnPower", nullptr, (EPropertyFlags)0x00210c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnPower_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bOneUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bOneUse_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bOneUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bOneUse = { "bOneUse", nullptr, (EPropertyFlags)0x00210c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bOneUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bOneUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bOneUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bHasBeenUsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bHasBeenUsed_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bHasBeenUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bHasBeenUsed = { "bHasBeenUsed", "OnRep_bHasBeenUsed", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bHasBeenUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bHasBeenUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bHasBeenUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bOneShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bOneShot_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bOneShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bOneShot = { "bOneShot", nullptr, (EPropertyFlags)0x00210c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bOneShot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bOneShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bOneShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoDisable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoDisable_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bAutoDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoDisable = { "bAutoDisable", nullptr, (EPropertyFlags)0x00210c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoDisable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoDisable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_AutoDisableTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_AutoDisableTime = { "AutoDisableTime", nullptr, (EPropertyFlags)0x00210c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, AutoDisableTime), METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_AutoDisableTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_AutoDisableTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bRunConstructionScript_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bRunConstructionScript_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bRunConstructionScript = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bRunConstructionScript = { "bRunConstructionScript", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bRunConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bRunConstructionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bRunConstructionScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnBreak_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bUpdateEnabledOnBreak = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnBreak = { "bUpdateEnabledOnBreak", nullptr, (EPropertyFlags)0x00210c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnBreak_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnBreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bEnableOnBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bEnableOnBreak_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bEnableOnBreak = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bEnableOnBreak = { "bEnableOnBreak", nullptr, (EPropertyFlags)0x00210c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bEnableOnBreak_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bEnableOnBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bEnableOnBreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBeBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBeBroken_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bCanBeBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBeBroken = { "bCanBeBroken", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBeBroken_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBeBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBeBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0021080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bOverrideStartingHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bOverrideStartingHealth_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bOverrideStartingHealth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bOverrideStartingHealth = { "bOverrideStartingHealth", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bOverrideStartingHealth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bOverrideStartingHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bOverrideStartingHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0021080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, Health), METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_MostRecentInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_MostRecentInstigator = { "MostRecentInstigator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, MostRecentInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_MostRecentInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_MostRecentInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_bUseDamageTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	void Z_Construct_UClass_AElectronic_Statics::NewProp_bUseDamageTypes_SetBit(void* Obj)
	{
		((AElectronic*)Obj)->bUseDamageTypes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_bUseDamageTypes = { "bUseDamageTypes", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronic), &Z_Construct_UClass_AElectronic_Statics::NewProp_bUseDamageTypes_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_bUseDamageTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_bUseDamageTypes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_DamageTypes_ElementProp = { "DamageTypes", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_DamageTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_DamageTypes = { "DamageTypes", nullptr, (EPropertyFlags)0x00240c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, DamageTypes), METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_DamageTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_DamageTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseParticle = { "OneUseParticle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, OneUseParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseSound = { "OneUseSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, OneUseSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_BreakParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_BreakParticle = { "BreakParticle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, BreakParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_BreakParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_BreakParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_EnableSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_EnableSound = { "EnableSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, EnableSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_EnableSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_EnableSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_DisableSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_DisableSound = { "DisableSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, DisableSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_DisableSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_DisableSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_EnabledSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_EnabledSound = { "EnabledSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, EnabledSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_EnabledSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_EnabledSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_BreakSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_BreakSound = { "BreakSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, BreakSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_BreakSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_BreakSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_LoopingAudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_LoopingAudioComponent = { "LoopingAudioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, LoopingAudioComponent), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_LoopingAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_LoopingAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, AudioComponent), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicEnabledChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicEnabledChanged = { "OnElectronicEnabledChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, OnElectronicEnabledChanged), Z_Construct_UDelegateFunction_Electronics_ElectronicValueUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicEnabledChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicEnabledChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicPoweredUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicPoweredUpdated = { "OnElectronicPoweredUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, OnElectronicPoweredUpdated), Z_Construct_UDelegateFunction_Electronics_ElectronicValueUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicPoweredUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicPoweredUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicBroken = { "OnElectronicBroken", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, OnElectronicBroken), Z_Construct_UDelegateFunction_Electronics_ElectronicUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_BeginPlayAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_BeginPlayAction = { "BeginPlayAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, BeginPlayAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_BeginPlayAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_BeginPlayAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_EndPlayAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_EndPlayAction = { "EndPlayAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, EndPlayAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_EndPlayAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_EndPlayAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_EnableAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_EnableAction = { "EnableAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, EnableAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_EnableAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_EnableAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_DisableAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_DisableAction = { "DisableAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, DisableAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_DisableAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_DisableAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_PowerAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_PowerAction = { "PowerAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, PowerAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_PowerAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_PowerAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_UnPowerAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_UnPowerAction = { "UnPowerAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, UnPowerAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_UnPowerAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_UnPowerAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_BreakAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_BreakAction = { "BreakAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, BreakAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_BreakAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_BreakAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_LockAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_LockAction = { "LockAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, LockAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_LockAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_LockAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_UnLockAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_UnLockAction = { "UnLockAction", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, UnLockAction), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_UnLockAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_UnLockAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronic_Statics::NewProp_ElectronicName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Electronic" },
		{ "ModuleRelativePath", "Public/Electronic.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AElectronic_Statics::NewProp_ElectronicName = { "ElectronicName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronic, ElectronicName), METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::NewProp_ElectronicName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::NewProp_ElectronicName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectronic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bPowered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoLockOnDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_AutoLockTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBreakWhenLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bOneUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bHasBeenUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bOneShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bAutoDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_AutoDisableTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bRunConstructionScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bUpdateEnabledOnBreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bEnableOnBreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bCanBeBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bOverrideStartingHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_MostRecentInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_bUseDamageTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_DamageTypes_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_DamageTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_OneUseSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_BreakParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_EnableSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_DisableSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_EnabledSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_BreakSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_LoopingAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicEnabledChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicPoweredUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_OnElectronicBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_BeginPlayAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_EndPlayAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_EnableAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_DisableAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_PowerAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_UnPowerAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_BreakAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_LockAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_UnLockAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronic_Statics::NewProp_ElectronicName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElectronic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectronic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElectronic_Statics::ClassParams = {
		&AElectronic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AElectronic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElectronic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElectronic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElectronic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElectronic, 440905907);
	template<> ELECTRONICS_API UClass* StaticClass<AElectronic>()
	{
		return AElectronic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElectronic(Z_Construct_UClass_AElectronic, &AElectronic::StaticClass, TEXT("/Script/Electronics"), TEXT("AElectronic"), false, nullptr, nullptr, nullptr);

	void AElectronic::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));
		static const FName Name_bPowered(TEXT("bPowered"));
		static const FName Name_bBroken(TEXT("bBroken"));
		static const FName Name_bLocked(TEXT("bLocked"));
		static const FName Name_bHasBeenUsed(TEXT("bHasBeenUsed"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Health(TEXT("Health"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName()
			&& Name_bPowered == ClassReps[(int32)ENetFields_Private::bPowered].Property->GetFName()
			&& Name_bBroken == ClassReps[(int32)ENetFields_Private::bBroken].Property->GetFName()
			&& Name_bLocked == ClassReps[(int32)ENetFields_Private::bLocked].Property->GetFName()
			&& Name_bHasBeenUsed == ClassReps[(int32)ENetFields_Private::bHasBeenUsed].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AElectronic"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElectronic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
