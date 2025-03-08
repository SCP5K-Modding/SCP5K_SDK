#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/Object.h"
#include "TaskManagerTask.generated.h"

class AAIController;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class AIUTILS_API UTaskManagerTask : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreTaskInCaseOfPrerequisiteFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreTaskInCaseOfAbort;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPrerequisiteFailureRestoration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAbortRestoration;
    
public:
    UTaskManagerTask();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBTNodeResult::Type TickTask(UBehaviorTreeComponent* OwnerComp, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldBeRestored(bool bRestorationReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsHighPriorityTask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetTaskPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishTask(AAIController* OwningController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent* OwnerComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoPrerequisiteOperation(AAIController* OwningController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanExecuteTask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AbortTask(UBehaviorTreeComponent* OwnerComp);
    
};

