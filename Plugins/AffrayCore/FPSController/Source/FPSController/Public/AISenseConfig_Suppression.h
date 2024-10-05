#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "AISenseConfig_Suppression.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class FPSCONTROLLER_API UAISenseConfig_Suppression : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Suppression();

};

