#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_RunEQSQuery -FallbackName=BTTask_RunEQSQuery
#include "BTTask_CoverQuery.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_CoverQuery : public UBTTask_RunEQSQuery {
    GENERATED_BODY()
public:
    UBTTask_CoverQuery();

};

