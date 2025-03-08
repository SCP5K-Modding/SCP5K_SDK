#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "CameraAnimationCameraModifier.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API UCameraAnimationCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAnimationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingCameraAnimationStrength;
    
    UCameraAnimationCameraModifier();

};

