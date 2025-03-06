#pragma once
#include "CoreMinimal.h"
#include "SAIOperationalArea.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct FSAIOperationalArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OperationsConstrainedToArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* Area;
    
    AISENTIENCE_API FSAIOperationalArea();
};

