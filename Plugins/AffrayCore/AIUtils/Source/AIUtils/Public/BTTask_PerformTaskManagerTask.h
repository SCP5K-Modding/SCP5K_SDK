#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_PerformTaskManagerTask.generated.h"

UCLASS(Blueprintable)
class AIUTILS_API UBTTask_PerformTaskManagerTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_PerformTaskManagerTask();

};

