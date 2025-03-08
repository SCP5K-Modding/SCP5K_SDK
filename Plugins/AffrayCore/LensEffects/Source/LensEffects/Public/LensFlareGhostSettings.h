#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LensFlareGhostSettings.generated.h"

USTRUCT(BlueprintType)
struct FLensFlareGhostSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    LENSEFFECTS_API FLensFlareGhostSettings();
};

