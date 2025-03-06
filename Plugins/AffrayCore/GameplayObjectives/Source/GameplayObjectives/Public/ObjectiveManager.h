#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ObjectiveCompletedDelegateDelegate.h"
#include "ObjectiveModifiedDelegateDelegate.h"
#include "SimpleObjectiveData.h"
#include "ObjectiveManager.generated.h"

class UObjective;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API AObjectiveManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UObjective*> Objectives;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveModifiedDelegate OnActivateObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveModifiedDelegate OnDeactivateObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveCompletedDelegate OnCompleteObjective;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasActivatedObjectives;
    
public:
    AObjectiveManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCachedObjectiveNames();
    
    UFUNCTION(BlueprintCallable)
    void SyncObjectives();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveObjectiveWithName(FName ObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveObjective(UObjective* Objective);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeObjectives();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetObjectiveNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjective* GetObjective(FName ObjectiveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetActiveObjectiveNames();
    
    UFUNCTION(BlueprintCallable)
    UObjective* DeactivateObjectiveWithName(FName ObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateObjective(UObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void AddObjective(UObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void AddCachedObjectiveName(const FString& ObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSimpleObjectives(const TArray<FSimpleObjectiveData>& InObjectives);
    
    UFUNCTION(BlueprintCallable)
    UObjective* ActivateObjectiveWithName(FName ObjectiveName, bool bStart, bool bDisplayOnUI, bool bReset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateObjectives();
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateObjective(UObjective* Objective, bool bStart, bool bDisplayOnUI, bool bReset);
    
};

