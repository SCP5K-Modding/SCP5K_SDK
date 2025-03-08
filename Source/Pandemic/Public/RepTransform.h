#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Rotator_NetQuantize.h"
#include "RepTransform.generated.h"

USTRUCT(BlueprintType)
struct PANDEMIC_API FRepTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator_NetQuantize Rotation;
    
    FRepTransform();
};

