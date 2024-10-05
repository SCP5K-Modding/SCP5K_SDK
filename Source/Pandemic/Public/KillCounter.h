#pragma once
#include "CoreMinimal.h"
#include "EnemyCounterUpdatedDelegateDelegate.h"
#include "KillCounter.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FKillCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CounterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> ClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyCounterUpdatedDelegate OnCounterUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyCounterUpdatedDelegate OnCounterCompleted;
    
    PANDEMIC_API FKillCounter();
};

