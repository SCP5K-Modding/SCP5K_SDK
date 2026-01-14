#pragma once
#include "CoreMinimal.h"
#include "GameEventBusCoprocessor.h"
#include "GameEventBusTestingChamberAudioCoprocessor.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UGameEventBusTestingChamberAudioCoprocessor : public UGameEventBusCoprocessor {
    GENERATED_BODY()
public:
    UGameEventBusTestingChamberAudioCoprocessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentScenario(const FString& ScenarioStringID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAreChambersOverriden(bool bNewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnZChamberEntryDelayed();
    
    UFUNCTION(BlueprintCallable)
    void OnZChamberEntry();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnWaveStarted(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnWaveCompleted(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable)
    void OnTestChamberEntryGreetingDelayed();
    
    UFUNCTION(BlueprintCallable)
    void OnTestChamberEntryAnnounceDelayed();
    
    UFUNCTION(BlueprintCallable)
    void OnTestChamberEntry();
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryChallSucceeded(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnSecondaryChallFailed(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnSecondaryChallAccept(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterDied();
    
    UFUNCTION(BlueprintCallable)
    void OnKioskChallSucceeded(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnKioskChallFailed(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnKioskChallDecline(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnKioskChallAccept(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnInitialWaveStarted(const UObject* InInstigator, const UObject* InSubject);
    
    UFUNCTION(BlueprintCallable)
    void OnClockwork914EntryDelayed();
    
    UFUNCTION(BlueprintCallable)
    void OnClockwork914Entry();
    
    UFUNCTION(BlueprintCallable)
    void OnAllWavesCompletedDelayed();
    
    UFUNCTION(BlueprintCallable)
    void OnAllWavesCompleted(const UObject* InInstigator, const UObject* InSubject);
    
};

