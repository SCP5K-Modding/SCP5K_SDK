#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Chaos/ChaosEngineInterface.h"
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

