#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunEQSQuery.h"
#include "BTTask_InvestigationQuery.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_InvestigationQuery : public UBTTask_RunEQSQuery {
    GENERATED_BODY()
public:
    UBTTask_InvestigationQuery();

};

