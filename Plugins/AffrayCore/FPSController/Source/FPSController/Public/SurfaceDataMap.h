#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "SimpleSurfaceData.h"
#include "SurfaceDataMap.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API USurfaceDataMap : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FSimpleSurfaceData> Surfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleSurfaceData Default;
    
    USurfaceDataMap();

    UFUNCTION(BlueprintCallable)
    FSimpleSurfaceData GetSurfaceData(TEnumAsByte<EPhysicalSurface> SurfaceType);
    
};

