#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
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

