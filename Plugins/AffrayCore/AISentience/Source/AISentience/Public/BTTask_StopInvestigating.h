#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_StopInvestigating.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_StopInvestigating : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_StopInvestigating();

};

