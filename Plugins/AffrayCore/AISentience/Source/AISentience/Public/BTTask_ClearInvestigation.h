#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BTTask_ClearInvestigation.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_ClearInvestigation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_ClearInvestigation();

};

