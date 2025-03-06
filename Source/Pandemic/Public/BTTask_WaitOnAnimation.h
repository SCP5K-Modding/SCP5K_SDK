#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_WaitOnAnimation.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTTask_WaitOnAnimation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitOnAnimation();

};

