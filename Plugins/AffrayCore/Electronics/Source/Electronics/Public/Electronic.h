#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=RandomScenarios -ObjectName=ScenarioItem -FallbackName=ScenarioItem
#include "ElectronicUpdatedDelegateDelegate.h"
#include "ElectronicValueUpdatedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "Electronic.generated.h"

class UDamageType;
class UFMODAudioComponent;
class UFMODEvent;
class UFXSystemAsset;
class UGameAction;
class USceneComponent;

UCLASS(Blueprintable)
class ELECTRONICS_API AElectronic : public AActor, public IScenarioItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bPowered, meta=(AllowPrivateAccess=true))
    bool bPowered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bBroken, meta=(AllowPrivateAccess=true))
    bool bBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bLocked, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLockOnDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoLockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBreakWhenLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bScenarioEnabled, meta=(AllowPrivateAccess=true))
    bool bScenarioEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateEnabledOnPower;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHasBeenUsed, meta=(AllowPrivateAccess=true))
    bool bHasBeenUsed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDisable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDisableTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunConstructionScript;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateEnabledOnBreak;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOnBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideStartingHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MostRecentInstigator;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDamageTypes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UDamageType>> DamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* OneUseParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OneUseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* BreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* EnableSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DisableSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* EnabledSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BreakSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LoopingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElectronicValueUpdatedDelegate OnElectronicEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElectronicValueUpdatedDelegate OnElectronicPoweredUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElectronicUpdatedDelegate OnElectronicBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* BeginPlayAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* EndPlayAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* EnableAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* DisableAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* PowerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* UnPowerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* BreakAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* LockAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* UnLockAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ElectronicName;
    
    AElectronic(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnPower(AActor* Caller);
    
    UFUNCTION(BlueprintCallable)
    void Unlock();
    
    UFUNCTION(BlueprintCallable)
    void UnBreak();
    
    UFUNCTION(BlueprintCallable)
    void Toggle(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopLoopingSound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartLoopingSound();
    
    UFUNCTION(BlueprintCallable)
    void SetPowered(bool bPower, AActor* Caller);
    
    UFUNCTION(BlueprintCallable)
    void SetHasBeenUsed(bool bNewHasBeenUsed);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnable, AActor* Caller);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnPower(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnlock();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPower(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerLock();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnable(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDisable(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBreak(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePoweredChanged(bool bNewPowered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnLock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnFirstUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnBreak();
    
    UFUNCTION(BlueprintCallable)
    void Power(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEnableSound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDisableSound();
    
    UFUNCTION(BlueprintCallable)
    void OnUnlock();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bScenarioEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bPowered();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bLocked();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasBeenUsed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bBroken();
    
    UFUNCTION(BlueprintCallable)
    void OnLock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnFirstUse();
    
    UFUNCTION(BlueprintCallable)
    void OnEnable();
    
    UFUNCTION(BlueprintCallable)
    void OnDisable();
    
    UFUNCTION(BlueprintCallable)
    void OnBreak();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastEnable(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDisable(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastBreak(AActor* Caller);
    
    UFUNCTION(BlueprintCallable)
    void Lock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOneUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenUsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableOnBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeBroken() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable(AActor* Caller);
    
    UFUNCTION(BlueprintCallable)
    void Disable(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnable(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDisable(AActor* Caller);
    
    UFUNCTION(BlueprintCallable)
    void Break(AActor* Caller);
    

    // Fix for true pure virtual functions not being implemented
};

