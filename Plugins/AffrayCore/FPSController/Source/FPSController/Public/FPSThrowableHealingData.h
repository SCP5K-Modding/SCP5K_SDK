#pragma once
#include "CoreMinimal.h"
#include "FPSThrowableData.h"
#include "FPSThrowableHealingData.generated.h"

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSThrowableHealingData : public UFPSThrowableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealingAmount;
    
    UFPSThrowableHealingData();

};

