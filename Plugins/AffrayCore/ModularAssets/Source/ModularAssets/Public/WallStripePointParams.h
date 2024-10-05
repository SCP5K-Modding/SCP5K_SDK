#pragma once
#include "CoreMinimal.h"
#include "WallStripePointParams.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FWallStripePointParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* OverrideCornerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipSide;
    
    MODULARASSETS_API FWallStripePointParams();
};

