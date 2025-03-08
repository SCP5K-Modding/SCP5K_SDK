#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_PerformTaskManagerTask.generated.h"

UCLASS(Blueprintable)
class AIUTILS_API UBTTask_PerformTaskManagerTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_PerformTaskManagerTask();

};

