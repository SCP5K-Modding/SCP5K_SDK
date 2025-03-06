#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESCP173HallucinationSeverity.h"
#include "SCP173HallucinogenSoundInfo.generated.h"

USTRUCT(BlueprintType)
struct FSCP173HallucinogenSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCP173HallucinationSeverity SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SoundPosition;
    
    PANDEMIC_API FSCP173HallucinogenSoundInfo();
};

