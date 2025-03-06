#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsVolume -FallbackName=PhysicsVolume
#include "FPSSlowVolumeConfig.h"
#include "FPSPhysicsVolume.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSPhysicsVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFPSSlowVolumeConfig SlowVolumeConfig;
    
    AFPSPhysicsVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSlowVolumeConfig(const FFPSSlowVolumeConfig& InConfig);
    
};

