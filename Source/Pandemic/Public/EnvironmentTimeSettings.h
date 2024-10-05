#pragma once
#include "CoreMinimal.h"
#include "EnvironmentTimeSettings.generated.h"

USTRUCT(BlueprintType)
struct FEnvironmentTimeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Latitude;
    
    PANDEMIC_API FEnvironmentTimeSettings();
};

