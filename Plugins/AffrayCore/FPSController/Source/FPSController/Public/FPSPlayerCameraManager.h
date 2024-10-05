#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/Scene.h"
#include "EVideoSetting.h"
#include "FPSPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class FPSCONTROLLER_API AFPSPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    AFPSPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnVideoSettingsUpdated(EVideoSetting Setting);
    
};

