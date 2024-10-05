#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "DamageCameraModifier.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API UDamageCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AberrationAmount;
    
    UDamageCameraModifier();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlpha() const;
    
};

