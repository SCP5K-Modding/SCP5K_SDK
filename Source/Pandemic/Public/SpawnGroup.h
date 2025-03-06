#pragma once
#include "CoreMinimal.h"
#include "EnemyUpdatedDelegateDelegate.h"
#include "SpawnGroup.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FSpawnGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SpawnedEnemies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyUpdatedDelegate OnEnemiesUpdated;
    
    PANDEMIC_API FSpawnGroup();
};

