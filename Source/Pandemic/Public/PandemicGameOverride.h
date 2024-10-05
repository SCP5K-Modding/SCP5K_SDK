#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PandemicGameOverride.generated.h"

class AObjectiveManager;
class UWorld;

USTRUCT(BlueprintType)
struct FPandemicGameOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AObjectiveManager> ObjectiveManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> LevelsToLoad;
    
    PANDEMIC_API FPandemicGameOverride();
};

