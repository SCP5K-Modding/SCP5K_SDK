#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_ClearInvestigation.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_ClearInvestigation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_ClearInvestigation();

};

