#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMetadata -FallbackName=SplineMetadata
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

