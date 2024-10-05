#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCP173ObserverClass.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PANDEMIC_API FSCP173ObserverClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ObserverClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeripheralFOV;
    
    FSCP173ObserverClass();
};

