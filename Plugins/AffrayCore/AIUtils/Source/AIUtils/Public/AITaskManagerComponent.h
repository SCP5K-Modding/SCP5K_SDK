#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ETaskManagerTaskType.h"
#include "Templates/SubclassOf.h"
#include "AITaskManagerComponent.generated.h"

class UTaskManagerTask;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIUTILS_API UAITaskManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Blackboard_HasDynamicTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Blackboard_HasHighPriorityDynamicTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTaskManagerTask>> InitialTasks;
    
public:
    UAITaskManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SortTasks();
    
    UFUNCTION(BlueprintCallable)
    void SortHighPriorityTasks();
    
    UFUNCTION(BlueprintCallable)
    void SortGeneralTasks();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTask(UTaskManagerTask* Task);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHighPriorityTask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyTasks() const;
    
    UFUNCTION(BlueprintCallable)
    UTaskManagerTask* AddTask(TSubclassOf<UTaskManagerTask> NewTask, ETaskManagerTaskType Stack, bool Sort);
    
    UFUNCTION(BlueprintCallable)
    void AddStack(TArray<TSubclassOf<UTaskManagerTask>> StackToAdd, ETaskManagerTaskType StackType);
    
    UFUNCTION(BlueprintCallable)
    void AddQueue(TArray<TSubclassOf<UTaskManagerTask>> Queue, ETaskManagerTaskType Stack);
    
};

