#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "WallStripePointParams.h"
#include "WallStripeMetadata.generated.h"

UCLASS(Blueprintable)
class MODULARASSETS_API UWallStripeMetadata : public USplineMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWallStripePointParams> PointParams;
    
    UWallStripeMetadata();

};

