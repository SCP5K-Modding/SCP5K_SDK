#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
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

