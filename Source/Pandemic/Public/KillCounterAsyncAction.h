#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EnemyCounterUpdatedDelegateDelegate.h"
#include "KillCounterAsyncOutputPinDelegate.h"
#include "KillCounterAsyncAction.generated.h"

class APawn;
class UKillCounterAsyncAction;
class UObject;

UCLASS(Blueprintable)
class PANDEMIC_API UKillCounterAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContext;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyCounterUpdatedDelegate Updated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyCounterUpdatedDelegate Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKillCounterAsyncOutputPin TimerElapsed;
    
    UKillCounterAsyncAction();

    UFUNCTION(BlueprintCallable)
    void TimerCompleted();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static UKillCounterAsyncAction* CreateKillCounter(UObject* InWorldContext, int32 InTarget, const TArray<TSoftClassPtr<APawn>>& InClassFilter, FName InCounterName, float InTimer, bool bInRemoveAfterTimerCompleted);
    
    UFUNCTION(BlueprintCallable)
    void CounterUpdated(APawn* InEnemy, int32 InRemainingEnemies, FName InCounterName);
    
    UFUNCTION(BlueprintCallable)
    void CounterCompleted(APawn* InEnemy, int32 InRemainingEnemies, FName InCounterName);
    
};

