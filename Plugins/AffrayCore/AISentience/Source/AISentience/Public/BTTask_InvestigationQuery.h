#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_RunEQSQuery -FallbackName=BTTask_RunEQSQuery
#include "BTTask_InvestigationQuery.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_InvestigationQuery : public UBTTask_RunEQSQuery {
    GENERATED_BODY()
public:
    UBTTask_InvestigationQuery();

};

