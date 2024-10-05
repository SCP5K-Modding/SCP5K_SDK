#pragma once
#include "CoreMinimal.h"
#include "Hallucination.h"
#include "TheatreAnomalyHallucination.generated.h"

class UFMODEvent;
class UMaterialInterface;

UCLASS(Blueprintable)
class PANDEMIC_API UTheatreAnomalyHallucination : public UHallucination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Event;
    
    UTheatreAnomalyHallucination();

};

