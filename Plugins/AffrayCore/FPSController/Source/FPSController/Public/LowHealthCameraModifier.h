#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "LowHealthCameraModifier.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API ULowHealthCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    ULowHealthCameraModifier();

};

