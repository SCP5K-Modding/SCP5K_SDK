#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIDirection -FallbackName=SAIDirection
#include "FakeDeathOverride.h"
#include "SAIDirection.h"
#include "SAIZombiePropertyOverrideDirection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API USAIZombiePropertyOverrideDirection : public USAIDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFakeDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeDeathOverride FakeDeathOverride;
    
    USAIZombiePropertyOverrideDirection();

};

