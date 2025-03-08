#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "LensEffectsSubsystem.generated.h"

class UPostProcessLensFlareAsset;

UCLASS(Blueprintable)
class LENSEFFECTS_API ULensEffectsSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessLensFlareAsset* PostProcessAsset;
    
public:
    ULensEffectsSubsystem();

};

