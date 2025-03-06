#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "SprintingCameraModifier.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API USprintingCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    USprintingCameraModifier();

};

