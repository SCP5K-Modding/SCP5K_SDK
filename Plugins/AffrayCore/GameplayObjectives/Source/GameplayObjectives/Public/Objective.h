#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectiveActivatedDelegateDelegate.h"
#include "ObjectiveCompletedDelegateDelegate.h"
#include "ObjectiveDeactivatedDelegateDelegate.h"
#include "ObjectiveResetDelegateDelegate.h"
#include "ObjectiveStartedDelegateDelegate.h"
#include "ObjectiveUpdatedDelegateDelegate.h"
#include "SimpleObjectiveData.h"
#include "Templates/SubclassOf.h"
#include "Objective.generated.h"

class AActor;
class AObjectiveManager;
class UObjective;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API UObjective : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AObjectiveManager* Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UObjective* Parent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bActive, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bStarted, meta=(AllowPrivateAccess=true))
    bool bStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bCompleted, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSucceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDisplayOnUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveName, meta=(AllowPrivateAccess=true))
    FName ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText ObjectiveDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText ObjectiveDescription;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsMajorObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTimerSucceeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UObjective*> ChildObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdateObjective, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateWithParent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartChildren;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteWithChildren;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjective* PreviousObjective;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveActivatedDelegate OnObjectiveActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveDeactivatedDelegate OnObjectiveDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveStartedDelegate OnObjectiveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveStartedDelegate OnObjectiveStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveCompletedDelegate OnObjectiveCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveUpdatedDelegate OnObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveResetDelegate OnObjectiveReset;
    
    UObjective();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateObjective();
    
    UFUNCTION(BlueprintCallable)
    void StopObjective();
    
    UFUNCTION(BlueprintCallable)
    void StartObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetupSimpleObjectiveData(FSimpleObjectiveData& Data) const;
    
    UFUNCTION(BlueprintCallable)
    void SetupFromSimpleObjectiveData(const FSimpleObjectiveData& Data);
    
    UFUNCTION(BlueprintCallable)
    void ResetObjective();
    
    UFUNCTION(BlueprintCallable)
    void RemoveChildObjective(FName ChildObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    void PreviousObjectiveCompleted(UObjective* Objective, bool bInSucceeded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bActive();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsesTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTimerSucceeds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSucceeded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjective* GetParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetObjectiveName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumChildObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMajorObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayOnUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    UObjective* GetChildObjective(FName ChildObjectiveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoActivateWithParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateObjective();
    
    UFUNCTION(BlueprintCallable)
    static UObjective* CreateEmptyObjective(TSubclassOf<UObjective> ObjectiveClass, UObject* Outer, FName Name, FText DisplayName, FText Description, bool bShouldUseTimer, bool bTimerShouldSucceed, float TimerLength, bool bShouldAutoActivateWithParent, bool bMajorObjective, bool bShouldStartChildren);
    
    UFUNCTION(BlueprintCallable)
    bool CompleteObjective(bool bSucceed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChildrenAreCompleted();
    
    UFUNCTION(BlueprintCallable)
    bool CheckRequirements();
    
    UFUNCTION(BlueprintCallable)
    void AddObjective(AObjectiveManager* ObjectiveManager);
    
    UFUNCTION(BlueprintCallable)
    void AddChildObjective(UObjective* Child, bool AutoActivate);
    
    UFUNCTION(BlueprintCallable)
    void ActivateObjective(bool bStart, bool bShouldDisplayOnUI, bool bReset);
    
};

