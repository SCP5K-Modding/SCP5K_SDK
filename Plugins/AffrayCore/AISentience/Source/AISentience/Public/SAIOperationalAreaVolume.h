#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SAIOperationalAreaVolume.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIOperationalAreaVolume : public AVolume {
    GENERATED_BODY()
public:
    ASAIOperationalAreaVolume(const FObjectInitializer& ObjectInitializer);

};

