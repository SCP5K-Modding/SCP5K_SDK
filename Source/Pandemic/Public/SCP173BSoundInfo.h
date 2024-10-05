#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ESCP173BSound.h"
#include "SCP173BSoundInfo.generated.h"

USTRUCT(BlueprintType)
struct FSCP173BSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCP173BSound SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize SoundPosition;
    
    PANDEMIC_API FSCP173BSoundInfo();
};

