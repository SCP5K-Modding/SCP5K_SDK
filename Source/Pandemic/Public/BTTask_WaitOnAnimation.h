#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitOnAnimation.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTTask_WaitOnAnimation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitOnAnimation();

};

