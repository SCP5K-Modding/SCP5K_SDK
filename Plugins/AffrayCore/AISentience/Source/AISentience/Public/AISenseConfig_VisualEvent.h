#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseAffiliationFilter -FallbackName=AISenseAffiliationFilter
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig -FallbackName=AISenseConfig
#include "AISenseConfig_VisualEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class AISENTIENCE_API UAISenseConfig_VisualEvent : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter TargetDetectionByAffiliation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionFOV;
    
    UAISenseConfig_VisualEvent();

};

