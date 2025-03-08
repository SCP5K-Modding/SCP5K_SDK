#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SAIOperationalAreaVolume.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIOperationalAreaVolume : public AVolume {
    GENERATED_BODY()
public:
    ASAIOperationalAreaVolume(const FObjectInitializer& ObjectInitializer);

};

