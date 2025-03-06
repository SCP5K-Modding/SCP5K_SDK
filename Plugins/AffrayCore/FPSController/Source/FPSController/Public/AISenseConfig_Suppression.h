#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseAffiliationFilter -FallbackName=AISenseAffiliationFilter
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig -FallbackName=AISenseConfig
#include "AISenseConfig_Suppression.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class FPSCONTROLLER_API UAISenseConfig_Suppression : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Suppression();

};

