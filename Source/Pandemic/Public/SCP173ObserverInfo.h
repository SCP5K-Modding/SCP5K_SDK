#pragma once
#include "CoreMinimal.h"
#include "SCP173ObserverInfo.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct PANDEMIC_API FSCP173ObserverInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentlyObserving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObservationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeripheralFOV;
    
    FSCP173ObserverInfo();
};

