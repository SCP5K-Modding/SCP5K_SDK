#pragma once
#include "CoreMinimal.h"
#include "Nodes/FlowNode.h"
#include "FlowNode_Objective.generated.h"

class UObjective;

UCLASS(Blueprintable)
class PANDEMIC_API UFlowNode_Objective : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjective* Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishNodeOnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishNodeOnDeactivation;
    
public:
    UFlowNode_Objective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveUpdated(UObjective* InObjective);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStopped(UObjective* InObjective, bool bWasStarted);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStarted(UObjective* InObjective, bool bWasStarted);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveReset(UObjective* InObjective);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveDeactivated(UObjective* InObjective);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveCompleted(UObjective* InObjective, bool bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveActivated(UObjective* InObjective);
    
};

