#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FPSAttachmentData.h"
#include "FPSBarrelData.generated.h"

class UFXSystemAsset;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSBarrelData : public UFPSAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RecoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoudnessMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuppressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompensator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* OverrideMuzzleFlashParticle;
    
    UFPSBarrelData();

};

