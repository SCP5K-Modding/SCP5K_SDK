#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SAIInvestigationSubsystem.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIInvestigationSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    USAIInvestigationSubsystem();

};

