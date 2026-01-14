#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ChamberUpgradeDialUpdatedDelegateDelegate.h"
#include "ChamberUpgradeMachineDelegateDelegate.h"
#include "ChamberUpgradeMachineFinishedDelegateDelegate.h"
#include "ChamberUpgradeMachineRunningDelegateDelegate.h"
#include "ClockworkAttachmentSettings.h"
#include "ClockworkDialPressureSettings.h"
#include "ClockworkItemData.h"
#include "ClockworkObjectPack.h"
#include "EClockworkDialSetting.h"
#include "EClockworkItemCategory.h"
#include "Templates/SubclassOf.h"
#include "TestingChamberUpgradeMachine.generated.h"

class AFPSItem;
class AFPSItemPickup;
class UFMODEvent;
class UFPSItemData;
class UGameEventBusComponent;
class UInteractableComponent;
class USceneComponent;
class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ATestingChamberUpgradeMachine : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberUpgradeMachineDelegate OnIntakeInteractedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberUpgradeDialUpdatedDelegate OnDialUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberUpgradeMachineFinishedDelegate OnOutputReadyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberUpgradeMachineRunningDelegate OnMachineRunningChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClockworkObjectPack> CategoryXObjectPacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClockworkObjectPack> FailureObjectPacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DialPressure, meta=(AllowPrivateAccess=true))
    TArray<FClockworkDialPressureSettings> DialPressureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TeamRankFailPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TeamRankFailPercentSCP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClockworkAttachmentSettings> AttachmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFailureChanceCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSucceedMaxFailureChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MachineDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DialStuckSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* NegativeFeedbackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference SoundAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMachineRunning, meta=(AllowPrivateAccess=true))
    bool bIsMachineRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamRank, meta=(AllowPrivateAccess=true))
    int32 TeamRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TeamRankText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFPSItemPickup* LastSpawnedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameEventBusComponent* EventBusComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AFPSItem>, FGameplayTagContainer> ItemSpawnEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* IntakeInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFPSItemPickup> IntakePickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFPSItemPickup* IntakePickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* IntakeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FClockworkItemData IntakeObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* DialInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DialSetting, meta=(AllowPrivateAccess=true))
    EClockworkDialSetting CurrentDialSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* KeyInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFPSItemPickup> OutputPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* OutputLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FClockworkItemData OutputObjectData;
    
public:
    ATestingChamberUpgradeMachine(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDialEmissive(EClockworkItemCategory IntakeCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamRank(uint8 NewRank);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetClockworkTokens(AActor* EventInstigator, int32 NewTokens);
    
    UFUNCTION(BlueprintCallable)
    void RandomizeAndSpawnWeapon(bool bSuccess, TArray<UFPSItemData*> ItemDataArray, AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void RandomizeAndSpawnObjectPack(bool bSuccess, TArray<UFPSItemData*> ItemDataArray, AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamRank();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMachineRunning();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DialSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DialPressure();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyInteracted(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnIntakeInteracted(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDialInteracted(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastIntakeInteracted(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDialInteracted(AActor* EventInstigator, bool bSuccessful);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTokenCost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTestingChamberRank();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFailureChanceFromRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFailureChanceFromDialPressure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFailureChance() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetClockworkTokens(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddScoreToUser(AActor* EventInstigator);
    
};

