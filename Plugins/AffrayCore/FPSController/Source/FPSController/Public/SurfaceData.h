#pragma once
#include "CoreMinimal.h"
#include "SurfaceData.generated.h"

class UFMODEvent;
class UFXSystemAsset;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SurfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* HitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HitDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTransparentDecal;
    
    FPSCONTROLLER_API FSurfaceData();
};

