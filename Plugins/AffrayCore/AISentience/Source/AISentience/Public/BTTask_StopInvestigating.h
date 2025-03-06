#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_StopInvestigating.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_StopInvestigating : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_StopInvestigating();

};

