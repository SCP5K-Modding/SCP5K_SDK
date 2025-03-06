#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionSystem -FallbackName=AIPerceptionSystem
#include "SAIPerception.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIPerception : public UAIPerceptionSystem {
    GENERATED_BODY()
public:
    USAIPerception();

};

