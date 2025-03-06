#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "SAIInvestigationSubsystem.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIInvestigationSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    USAIInvestigationSubsystem();

};

