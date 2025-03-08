#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunEQSQuery.h"
#include "BTTask_CoverQuery.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_CoverQuery : public UBTTask_RunEQSQuery {
    GENERATED_BODY()
public:
    UBTTask_CoverQuery();

};

