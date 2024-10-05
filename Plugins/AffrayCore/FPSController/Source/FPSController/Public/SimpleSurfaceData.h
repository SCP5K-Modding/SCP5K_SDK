#pragma once
#include "CoreMinimal.h"
#include "SimpleSurfaceData.generated.h"

class UFMODEvent;
class UFXSystemAsset;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSimpleSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SurfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> HitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> HitDecal;
    
    FPSCONTROLLER_API FSimpleSurfaceData();
};

