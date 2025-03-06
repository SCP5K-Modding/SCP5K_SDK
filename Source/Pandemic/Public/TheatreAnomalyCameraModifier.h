#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "TheatreAnomalyCameraModifier.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UTheatreAnomalyCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UTheatreAnomalyCameraModifier();

};

