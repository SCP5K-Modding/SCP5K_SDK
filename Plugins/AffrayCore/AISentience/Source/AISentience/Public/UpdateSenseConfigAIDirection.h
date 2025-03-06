#pragma once
#include "CoreMinimal.h"
#include "SAIDirection.h"
#include "UpdateSenseConfigAIDirection.generated.h"

class UAISenseConfig;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class AISENTIENCE_API UUpdateSenseConfigAIDirection : public USAIDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SenseConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHearingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRange;
    
    UUpdateSenseConfigAIDirection();

};

