#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=SimpleHitData -FallbackName=SimpleHitData
//CROSS-MODULE INCLUDE V2: -ModuleName=RandomScenarios -ObjectName=ScenarioItem -FallbackName=ScenarioItem
#include "1262PuzzleStage.h"
#include "SCP1262Core.generated.h"

class AElectronicSwitch;
class ASCP1262Spitter;
class ASCP621Flower;
class AWaterLevelController;
class UFMODAudioComponent;
class UFMODEvent;
class UHealthComponent;
class UMeshComponent;
class USphereComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP1262Core : public AActor, public IScenarioItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* WeakPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<F1262PuzzleStage> Stages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElectronicSwitch* ConnectedSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterLevelController* WaterLevelController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsOpen, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsInPuzzle, meta=(AllowPrivateAccess=true))
    bool bIsInPuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stage, meta=(AllowPrivateAccess=true))
    uint8 Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailPuzzleOnStageFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateWaterLevelCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWaterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASCP621Flower*> PickedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASCP1262Spitter*> ConnectedSpitters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* CloseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LoopingAliveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OpenDuringPuzzleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LoopingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
public:
    ASCP1262Core(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartStage(int32 InStage);
    
    UFUNCTION(BlueprintCallable)
    void StartPuzzle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenChanged(bool bNewOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPuzzle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStageChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Stage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsInPuzzle();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthComponentHealthChanged(UHealthComponent* InHealthComponent, float Health);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthComponentDied(UHealthComponent* InHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthComponentDamaged(UHealthComponent* Component, FSimpleHitData HitData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPuzzle(bool bSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSmoothHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void FailStage();
    
    UFUNCTION(BlueprintCallable)
    void EndPuzzle(bool bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void CompleteStage();
    

    // Fix for true pure virtual functions not being implemented
};

