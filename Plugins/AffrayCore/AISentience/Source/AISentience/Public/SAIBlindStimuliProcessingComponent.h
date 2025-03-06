#pragma once
#include "CoreMinimal.h"
#include "SAIStimuliProcessingComponent.h"
#include "SAIBlindStimuliProcessingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIBlindStimuliProcessingComponent : public USAIStimuliProcessingComponent {
    GENERATED_BODY()
public:
    USAIBlindStimuliProcessingComponent(const FObjectInitializer& ObjectInitializer);

};

