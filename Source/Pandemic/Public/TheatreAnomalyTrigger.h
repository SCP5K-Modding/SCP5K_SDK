#pragma once
#include "CoreMinimal.h"
#include "PlayerTriggerVolume.h"
#include "TheatreAnomalyTrigger.generated.h"

class AActor;

UCLASS(Blueprintable)
class PANDEMIC_API ATheatreAnomalyTrigger : public APlayerTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleport;
    
    ATheatreAnomalyTrigger(const FObjectInitializer& ObjectInitializer);

};

